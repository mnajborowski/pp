const val MESSAGE = "To be, or not to be, that is the question you ask."

fun main() {
    val rsa = RSA(4091, 5531)

    val encrypted = rsa.encrypt(MESSAGE)
    val decrypted = rsa.decrypt(encrypted)

    println("Private key: ${rsa.privateKey}")
    println("Public key: ${rsa.publicKey}")

    println("Plain message: $MESSAGE")
    //println("Encrypted message: $encrypted")
    println("Decrypted message: $decrypted")
}