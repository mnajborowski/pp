import java.awt.Color
import java.awt.image.BufferedImage
import java.io.File
import java.lang.RuntimeException
import java.lang.StringBuilder
import javax.imageio.ImageIO

class LSB {

    fun encrypt(message: String, imagePath: String) {
        var image = ImageIO.read(File(imagePath))
        val width = image.width
        val height = image.height
        val pixels = width * height
        if (message.length > pixels / 3)
            throw RuntimeException("Message is too long to be encrypted on image")

        val messageBinary = message
            .map { String.format("%8s", Integer.toBinaryString(it.toInt())).replace(' ', '0') }

        val pixelsInThrees = image
            .getPixels()
            .flatMap { it.toList() }
            .chunked(3)

        val newPixels = messageBinary.mapIndexed { index, charBinnary ->
            listOf(
                Color(
                    (pixelsInThrees[index][0].red.toString(2).dropLast(1).let { it + charBinnary[0] }).toInt(2),
                    (pixelsInThrees[index][0].green.toString(2).dropLast(1).let { it + charBinnary[1] }).toInt(2),
                    (pixelsInThrees[index][0].blue.toString(2).dropLast(1).let { it + charBinnary[2] }).toInt(2)
                ),
                Color(
                    (pixelsInThrees[index][1].red.toString(2).dropLast(1).let { it + charBinnary[3] }).toInt(2),
                    (pixelsInThrees[index][1].green.toString(2).dropLast(1).let { it + charBinnary[4] }).toInt(2),
                    (pixelsInThrees[index][1].blue.toString(2).dropLast(1).let { it + charBinnary[5] }).toInt(2)
                ),
                Color(
                    (pixelsInThrees[index][2].red.toString(2).dropLast(1).let { it + charBinnary[6] }).toInt(2),
                    (pixelsInThrees[index][2].green.toString(2).dropLast(1).let { it + charBinnary[7] }).toInt(2),
                    pixelsInThrees[index][2].blue
                )
            )
        }.flatMap { it.toList() }.chunked(width)

        newPixels.forEachIndexed { y, row ->
            row.forEachIndexed { x, color ->
                image.setRGB(x, y, color.rgb)
            }
        }
        ImageIO.write(image, "png", File("newImage.png"))
    }

    fun decrypt(length: Int, imagePath: String): String {
        val image = ImageIO.read(File(imagePath))

        val pixelsInThrees = image
            .getPixels()
            .flatMap { it.toList() }
            .chunked(3)

        val sb = StringBuilder()
        pixelsInThrees.forEach { pixel ->
            sb.append(pixel[0].red.toString(2).last())
            sb.append(pixel[0].green.toString(2).last())
            sb.append(pixel[0].blue.toString(2).last())
            sb.append(pixel[1].red.toString(2).last())
            sb.append(pixel[1].green.toString(2).last())
            sb.append(pixel[1].blue.toString(2).last())
            sb.append(pixel[2].red.toString(2).last())
            sb.append(pixel[2].green.toString(2).last())
        }
        val decryptedBinary = sb.toString().chunked(8)
        return decryptedBinary.map { it.toInt(2).toChar() }.joinToString("").take(length)
    }

    private fun BufferedImage.getPixels() =
        Array(this.height) { y ->
            Array(this.width) { x ->
                Color(this.getRGB(x, y))
            }
        }
}