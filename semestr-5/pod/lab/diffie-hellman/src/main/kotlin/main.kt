import java.math.BigInteger

fun main() {
    val n = 6907L
    val g = 4649L
    val alice = A(n, g)
    val bob = B(n, g)
    println("Alice's session key: ${alice.calculateK(bob.Y)}")
    println("Bob's session key: ${bob.calculateK(alice.X)}")
}

fun isPrimitiveRootModN(n: Long, g: Long): Boolean {
    if (g <= 1 || g >= n) {
        println("g has to be 1<g<n")
        return false
    }
    var temp: BigInteger
    val rests = mutableListOf<Long>()
    for (x in 1L until n) {
        temp = g.toBigInteger().modPow(BigInteger.valueOf(x), BigInteger.valueOf(n))
        if (rests.contains(temp.toLong())) break
        else rests.add(temp.toLong())
    }
    if (rests.size.toLong() == n - 1L) return true
    return false
}

fun isPrimeNumber(n: Long): Boolean {
    for (i in 2 until n)
        if (n % i == 0L) {
            println("n has to be prime number")
            return false
        }
    return true
}