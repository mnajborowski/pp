import java.io.File

const val MESSAGE = "To be, or not to be, that is the question."
const val KEY = "S6dlrcVXKAxQUbeo"

val files = listOf("10mb.txt", "100mb.txt", "150mb.txt")

fun main() {
    //measureTimes()

    myCBC()
}

fun measureTimes() {
    val namesAndMessages = files.map { fileName ->
        File(fileName).let { file ->
            file.name to file.bufferedReader().useLines { it.joinToString("") }
        }
    }
    val modes = enumValues<AES.Mode>()
    namesAndMessages.forEach { (name, message) ->
        println(name)
        modes.forEach { mode ->
            val cipher = AES(mode, KEY)
            val encrypted = cipher.encrypt(message)
            println("$mode encryption time: ${cipher.encryptAndMeasureTime(message)} ms")
            println("$mode decryption time: ${cipher.decryptAndMeasureTime(encrypted)} ms")
        }
        println()
    }
}

fun myCBC() {
    val cbc = MyCBC(KEY)
    var encrypted = cbc.encrypt(MESSAGE)
    //println(encrypted)
    //encrypted = encrypted.replaceFirst('X', '8')
    println(encrypted)
    val decrypted = cbc.decrypt(encrypted)
    println(decrypted)
}