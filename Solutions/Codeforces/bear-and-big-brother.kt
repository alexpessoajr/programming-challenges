
fun main() {
  var (a, b) = readLine()!!.split(" ").map(String::toInt)

  for (i in 1 until 10000000) {
    a *= 3
    b *= 2

    if (a > b) {
      print(i)
      break
    }
  }
}
