
fun main() {
  val n = readLine()!!.toInt()
  repeat(n) {
    val (a, b) = readLine()!!.split(" ").map { it.toInt() }
    println(a + b)
  }
}
