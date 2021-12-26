fun main() {
    val trivial = Trivial(100, 1000)
    val shamir = Shamir(15, 8, 150, 577)

    val trivialShares = trivial.generateShares()
    val lastShare = trivial.countLastShare(trivialShares)
    val trivialSecret = trivial.countSecret(trivialShares, lastShare)

    val shamirShares = shamir.countShares()
    val shamirSecret = shamir.countSecret(shamirShares)

    println("Trival")
    println("Secret: ${trivial.secret}")
    println("Shares: $trivialShares")
    println("Last share: $lastShare")
    println("Reconstructed secret: $trivialSecret")

    println()

    println("Shamir")
    println("Values: ${shamir.values}")
    println("Shares: $shamirShares")
    println("Reconstructed secret: $shamirSecret")
}