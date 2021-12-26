import java.security.MessageDigest
import kotlin.system.measureNanoTime

class Hash {
    private val algorithms = listOf("MD5", "SHA-1", "SHA-224", "SHA-256", "SHA-384")

    fun generateViaAllAlgorithmsWithTimeAndSize(input: String) {
        algorithms.forEach {
            val hash = generate(input, it)
            val time = measureNanoTime { generate(input, it) }
            val length = hash.length

            println("Algorithm: $it\tTime: $time ns\tLength: $length\nHash: $hash")
        }
    }

    fun generate(input: String, algorithm: String): String =
        MessageDigest.getInstance(algorithm)
            .digest(input.toByteArray())
            .fold("", { str, it -> str + "%02x".format(it) })
}