fun main(args: Array<String>) {
    val bbs = BBS()
    bbs.init()
    print("key length = ")
    val range = readLine()!!.toInt()
    val key = bbs.generateKey(range).chunked(50)
    for (sequence in key) {
        for (char in sequence)
            print(char)
        println()
    }
}