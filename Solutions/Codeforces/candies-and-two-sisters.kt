
fun main() {
  repeat(readLine()!!.toInt()) {
    val n = readLine()!!.toInt()
    println(if (n%2 == 0) n/2 - 1 else (n-1)/2)
  }
}
