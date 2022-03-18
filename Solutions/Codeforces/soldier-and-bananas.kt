import kotlin.math.max

fun main() {
  val (k, n, w) = readLine()!!.split(" ").map(String::toLong)
  val total = ((w * k - k) * w)/2 + k * w
  print(max(0, total - n))
}
