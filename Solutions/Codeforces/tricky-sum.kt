
fun main() {
  repeat(readLine()!!.toInt()) {
    val n = readLine()!!.toLong()
    val sum =  ((1 + n) * n) / 2
    var p2sum = 2
    var i = 1

    while (1.shl(i) <= n) {
      p2sum += 1.shl(i) * 2
      i++
    }

    println(sum - p2sum)
  }
}
