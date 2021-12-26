import kotlin.math.pow

class BBS {
    private var p: Long = 0
    private var q: Long = 0
    private var N: Long = 0
    private var x: Long = 0

    constructor()

    constructor(
        p: Long,
        q: Long,
        x: Long
    ) {
        this.p = p
        this.q = q
        this.x = x
        this.N = p * q
    }

    fun init() {
        setP()
        setQ()
        N = p * q

        println("N = $N")

        setX()
    }

    private fun setP() {
        do {
            print("p = ")
            p = readLine()!!.toLong()
        } while (!checkValue(p))
    }

    private fun setQ() {
        do {
            print("q = ")
            q = readLine()!!.toLong();
        } while (!checkValue(q))
    }

    private fun setX() {
        do {
            print("x = ")
            x = readLine()!!.toLong()
        } while (!checkValues())
    }

    fun generateKey(range: Int) = with(StringBuilder()) {
        var entry = (x.toDouble().pow(2)).toLong() % N

        for (i in 0 until range) {
            //println("$entry     ${entry.toString(2)}")
            append(entry.toString(2).last())
            entry = (entry.toDouble().pow(2)).toLong() % N
        }
        this.toString()
    }

    private fun checkValue(value: Long): Boolean {
        return when {
            value.rem(4L) == 3L -> true
            else -> {
                println("The value mod 4 must give 3")
                false
            }
        }
    }

    private fun checkValues(): Boolean {
        val range = when {
            x > N -> x
            else -> N
        }
        var gcd = 1L
        for (i in 1..range) {
            if (x % i == 0L && N % i == 0L)
                gcd = i
        }
        return when (gcd) {
            1L -> true
            else -> {
                println("x and N have to be coprime integers")
                false
            }
        }
    }

    fun getNumberOfUpperBits(key: String): Int {
        return key.count { it == '1' }
    }
}