import org.junit.Test
import kotlin.test.assertTrue

class BBSTest {

    private val bbs = BBS(11699, 7219, 645123)
    private val key = bbs.generateKey(20000)
    private val regex = "([01])\\1*".toRegex()

    @Test
    fun singleBitsTest() {
        val numberOfUpperBits = bbs.getNumberOfUpperBits(key)
        assertTrue(numberOfUpperBits in 9726..10274)
    }

    @Test
    fun seriesTest() {
        val consecutiveBitsSeries = regex.findAll(key).map { matchResult ->
            matchResult.value
        }

        val series: Map<Int, Int> = consecutiveBitsSeries
            .filter { series -> series.contains('0') }
            .groupingBy { series -> series.length }.eachCount()
            .toSortedMap()

        println()

        val seriesGreaterThan5 = series.filter { (length, _) ->
            length > 5
        }.values.sum()

        assertTrue(series[1] in 2315..2685)
        assertTrue(series[2] in 1114..1386)
        assertTrue(series[3] in 527..723)
        assertTrue(series[4] in 240..384)
        assertTrue(series[5] in 103..209)
        assertTrue(seriesGreaterThan5 in 103..209)
    }

    @Test
    fun longSeriestest() {
        fun longSeriesTest() {
            val series = regex.findAll(key).map { matchResult ->
                matchResult.value
            }

            val maxSeriesLength = series.maxBy { result -> result.length }?.length ?: 0

            assertTrue(maxSeriesLength < 26)
        }
    }
}