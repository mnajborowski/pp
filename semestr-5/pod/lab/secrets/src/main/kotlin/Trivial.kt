import kotlin.random.Random

class Trivial(
    private val n: Int,
    val k: Int
) {
    val secret = Random.nextInt(0, k)
    fun generateShares(): MutableList<Int> = MutableList(n-1) { Random.nextInt(0, k) }

    fun countLastShare(values: MutableList<Int>): Int {
        var sn = secret
        values.forEach {
            sn -= it
        }
        return sn % k
    }

    fun countSecret(values: MutableList<Int>, sn: Int): Int {
        var secret = 0
        values.forEach { secret += it }
        secret += sn
        return secret % k
    }
}