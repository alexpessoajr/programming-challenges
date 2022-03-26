import java.lang.Integer.min

fun main() {
  val (n, k) = readLine()!!.split(" ").map(String::toInt)
  var r = 240 - k
  var i = 1

  while (r >= i * 5) {
    r -= i * 5
    i++
  }

  print(min(n, i - 1))
}
