
fun main() {
  val n = readLine()!!.toInt()
  val v = readLine()!!.split(" ").map(String::toInt)

  print(String.format("%.12f", v.sum().toDouble()/n))
}
