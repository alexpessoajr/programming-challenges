
fun main() {
  val n = readLine()!!.toInt()
  var x = readLine()!!.split(" ").map(String::toInt)
  var y = readLine()!!.split(" ").map(String::toInt)

  x = x.slice(1 until x.size)
  y = y.slice(1 until y.size)

  print(if (x.toSet().plus(y).size == n) "I become the guy." else "Oh, my keyboard!")
}
