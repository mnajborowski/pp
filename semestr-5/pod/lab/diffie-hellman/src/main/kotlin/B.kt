import java.math.BigInteger
import kotlin.random.Random

class B (
    val n: Long,
    g: Long
) {
    val privateKey = generatePrivateKey()
    val Y = calculateY(n, g, privateKey)

    private fun generatePrivateKey() = Random.nextLong(1000, 10000)

    private fun calculateY(n: Long, g: Long, privateKey: Long) =
        BigInteger.valueOf(g)
            .modPow(BigInteger.valueOf(privateKey), BigInteger.valueOf(n))
            .toLong()

    fun calculateK(base: Long) =
        BigInteger.valueOf(base)
            .modPow(BigInteger.valueOf(privateKey), BigInteger.valueOf(n))
            .toLong()
}