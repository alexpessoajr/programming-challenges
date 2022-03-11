import kotlin.math.max

fun main() {
  val n = readLine()!!.toInt()
  val v = readLine()!!.split(" ").map(String::toInt).sorted()
  var maxLength = 0
  var i = 0
  var j = 0

  while (j < n) {
    if (v[j] - v[i] <= 5) j++ else i++
    maxLength = max(maxLength, j - i)
  }

  print(maxLength)
}