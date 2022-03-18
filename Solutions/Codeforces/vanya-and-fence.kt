
fun main() {
  val (n, h) = readLine()!!.split(" ").map(String::toInt)
  var width = 0

  for (p in readLine()!!.split(" ").map(String::toInt)) {
    if (p > h) {
      width += 2
    } else {
      width++
    }
  }
  print(width)
}
