
fun main() {
  repeat(readLine()!!.toInt()) {
    val (n, m, k) = readLine()!!.split(" ").map(String::toInt)
    val s = n - 1 + ((m - 1) * n)
    println(if (s == k) "YES" else "NO")
  }
}
