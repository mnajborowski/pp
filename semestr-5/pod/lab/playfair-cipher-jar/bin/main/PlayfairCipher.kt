class PlayfairCipher(keyword: String) {
    companion object {
        val REGEX = "[A-Za-z _.,!\\\"'/$&;:?@-]*"

        val alphabet = ('A'..'Z') - 'J'
    }

    private var playfairKeyword = keyword.toPlayfairAlphabet()
    private val table: List<List<Char>> = initializeTable();

    init {
        require(keyword.matches(REGEX.toRegex())) {
            "Keyword must only contain alphabet letters or special characters"
        }
        require(keyword.isFreeFromRepeatingChars()) {
            "Keyword cannot contain repeating characters"
        }
    }

    fun setKeyword(keyword: String) {
        this.playfairKeyword = keyword.toPlayfairAlphabet()
    }

    fun encrypt(message: String): String {
        require(message.matches(REGEX.toRegex())) {
            "Message must only contain alphabet letters or special characters"
        }
        return message.prepareAndSplit().fold("") { acc: String, (first: Char, second: Char) ->
            val (row1, col1) = indexOf(first)
            val (row2, col2) = indexOf(second)
            acc + when {
                row1 == row2 ->
                    "${table[row1][(col1 + 1) % 5]}" + "${table[row2][(col2 + 1) % 5]}"

                col1 == col2 ->
                    "${table[(row1 + 1) % 5][col1]}" + "${table[(row2 + 1) % 5][col2]}"

                else -> "${table[row1][col2]}" + "${table[row2][col1]}"
            }
        }
    }

    override fun toString() = buildString {
        for (i in 0..4) {
            for (j in 0..4) append(table[i][j] + "\t")
        }
    }

    private fun String.toPlayfairAlphabet(): String =
        this.filter { it.isLetter() }
            .toUpperCase()
            .replace('J', 'I')

    private fun String.isFreeFromRepeatingChars(): Boolean =
        this.groupingBy { it }
            .eachCount()
            .filter { it.value > 1 }
            .isEmpty()

    private fun String.prepareAndSplit(): List<Pair<Char, Char>> {
        return this.toPlayfairAlphabet().fold("") { acc: String, c: Char ->
            if (acc.lastOrNull() == c) acc + "X$c"
            else acc + "$c"
        }.let {
            when {
                it.length % 2 == 0 -> it
                it.last() != 'X' -> it + "X"
                else -> it + "Z"
            }
        }.chunked(2).map { it.first() to it.last() }
    }

    private fun initializeTable(): List<List<Char>> {
        val keyword = playfairKeyword.toList()
        val rest = alphabet - keyword
        val table = keyword + rest

        return table.chunked(5)
    }

    data class Index(val row: Int, val column: Int)

    private fun indexOf(c: Char): Index {
        for (i in 0..4)
            for (j in 0..4)
                if (table[i][j] == c) return Index(i, j)
        throw Exception("The table is incorrectly initialized")
    }
}