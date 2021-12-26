const val MESSAGE = "To be, or not to be, that is the question."

fun main() {
    val lsb = LSB()

    lsb.encrypt(MESSAGE, "image.jpg")
    val decrypted = lsb.decrypt(50, "newImage.png")
    println(decrypted)
}