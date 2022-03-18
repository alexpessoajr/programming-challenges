
fun main() {
  val s = readLine()!!.split(" ").map(String::toInt)
  print(4 - s.toSet().size)
}
