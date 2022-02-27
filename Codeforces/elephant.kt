
fun main() {
  val x = readLine()!!.toInt()
  var m = x / 5

  if (x % 5 != 0) m++

  print(m)
}
