import java.math.BigInteger
import kotlin.random.Random

class RSA(
    val p: Long,
    val q: Long
) {
    private val n = calculateN()
    private val phi = calculatePhi()
    private val e = generateE()
    private val d = generateD()

    val privateKey = d to n
    val publicKey = e to n


    fun calculateN() = p * q

    fun calculatePhi() = (p - 1L) * (q - 1L)

    fun generateE() =
        (2..phi).filter { gcd(it, phi) == 1L}.random()

    fun generateD() =
        (2..n).first { (it * e - 1) % phi == 0L }

    fun encrypt(message: String): List<BigInteger> {
        val encrypted = message.toByteArray().map {
            it
                .toLong().toBigInteger()
                .modPow(e.toBigInteger(), n.toBigInteger())
        }
        return encrypted
    }

    fun decrypt(message: List<BigInteger>): String {
        val decrypted = message.map {
            it
                .toLong().toBigInteger()
                .modPow(d.toBigInteger(), n.toBigInteger())
                .toByte()
                .toChar()
        }
        return decrypted.joinToString("")
    }

    private fun gcd(a: Long, b: Long): Long {
        return if (b == 0L) a
        else gcd(b, a % b)
    }
}