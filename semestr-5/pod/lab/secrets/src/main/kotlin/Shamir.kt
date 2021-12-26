import kotlin.math.pow
import kotlin.random.Random

class Shamir(
    private val n: Int,
    private val t: Int,
    private val secret: Long,
    private val p: Int
) {
    init {
       require(isPrimeNumber(p)) { "P has to be prime number." }
    }

//    val p = List(1000) { index -> n + index }.filter { isPrimeNumber(it) }.random()
//    val secret = Random.nextLong(0, p.toLong())
    val values = List(t - 1) { Random.nextLong(-1000L, 1000L) }

    fun countShares() =
        (1..n).associateWith { i ->
            val sum = values.foldIndexed(0L) { j, acc, value ->
                acc + value * i.pow(j + 1)
            }
            (secret + sum) % p
//            Math.floorMod(secret + sum, p.toLong())
        }

    fun countSecret(shares: Map<Int, Long>): Long {
        val requiredShares = shares.entries.take(t)
        return requiredShares.sumByLong { (i, value) ->
            val product = requiredShares.fold(1.0) { acc, (j, _) ->
                if (i != j) acc * (-j.toDouble() / (i - j))
                else acc
            }
            value * product.toLong() % p
//            Math.floorMod(value * product.toLong(), p.toLong())
        }
    }

    private fun isPrimeNumber(value: Int): Boolean {
        for (i in 2..value / 2) {
            if (value % i == 0) {
                return false
            }
        }
        return true
    }

    private fun Int.pow(n: Int) = this.toDouble().pow(n).toLong()

    private inline fun <T> Iterable<T>.sumByLong(selector: (T) -> Long): Long {
        var sum = 0L
        for (element in this) {
            sum += selector(element)
        }
        return sum
    }
}