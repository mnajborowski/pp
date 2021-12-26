fun main() {
    val hash = Hash()
    val input1 = "Wesolych swiat!"
    val input2 = "I szczesliwego nowego roku!"
    val shortPhrase = "ala"

    println("Input: $input1\n")
    hash.generateViaAllAlgorithmsWithTimeAndSize(input1)
    println()
    println("Input: $input2\n")
    hash.generateViaAllAlgorithmsWithTimeAndSize(input2)
    println()

    println("Short phrase: $shortPhrase")
    println(hash.generate(shortPhrase, "MD5"))
}
