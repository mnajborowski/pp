import java.io.File

fun main() {
    do {
        println("1. Console")
        println("2. File")
        println("0. Exit\n")
        val choice = readLine()?.toInt()

        when (choice) {
            1 -> console()
            2 -> file()
        }
    } while (choice != 0)
}

private fun console() {
    println("\nEnter keyword:")
    val keyword = readLine()!!
    val playfair = PlayfairCipher(keyword)
    println("\nEnter message:")
    val plainText = readLine()!!

    //val encrypted = playfair.encrypt(plainText)
    val decrypted = playfair.decrypt(plainText)

    //println("\nEncrypted message:\n$encrypted")
    println("\nDecrypted message:\n$decrypted")
    println("\nPress Enter to continue...")
    readLine()!!
}

private fun file() {
    val inputFile = File("input.txt")
    val outputFile = File("output.txt")
    val keyword = inputFile.readLines().getOrElse(0) { "" }
    val plainText = inputFile.readLines().getOrElse(1) { "" }
    val playfair = PlayfairCipher(keyword)

    val encrypted = playfair.encrypt(plainText)
    val decrypted = playfair.decrypt(encrypted)

    val output = buildString {
        appendln("Encrypted message:\n$encrypted")
        appendln("Decrypted message:\n$decrypted")
    }
    outputFile.writeText(output)
    println("Message saved to file!")
    println("\nPress Enter to continue...")
    readLine()!!
}