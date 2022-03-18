
fun main() {
  val n = readLine()!!.toInt()
  val s = readLine()!!.toCharArray().map { it.toUpperCase() }.toSet()

  print(if (s.size == 'z' - 'a' + 1) "YES" else "NO")
}
