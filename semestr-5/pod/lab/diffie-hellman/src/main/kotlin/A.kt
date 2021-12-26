import java.math.BigInteger
import kotlin.random.Random

class A (
    val n: Long,
    g: Long
) {
    val privateKey = generatePrivateKey()
    val X = calculateX(n, g, privateKey)

    private fun generatePrivateKey() = Random.nextLong(1000, 10000)

    private fun calculateX(n: Long, g: Long, privateKey: Long) =
        BigInteger.valueOf(g)
            .modPow(BigInteger.valueOf(privateKey), BigInteger.valueOf(n))
            .toLong()

    fun calculateK(base: Long) =
        BigInteger.valueOf(base)
            .modPow(BigInteger.valueOf(privateKey), BigInteger.valueOf(n))
            .toLong()
}