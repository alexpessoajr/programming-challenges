
fun main() {
  val n = readLine()!!.toInt()
  var c = 0;
  repeat(n) {
    val (p, q) = readLine()!!.split(" ").map(String::toInt)
    if (p + 1 < q) c++
  }
  print(c)
}
