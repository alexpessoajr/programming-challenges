import kotlin.math.max

fun main() {
  val n = readLine()!!.toInt()
  val a = readLine()!!.split(" ").map(String::toInt)
  val m = readLine()!!.toInt()
  val b = readLine()!!.split(" ").map(String::toInt)

  var ratio = 0
  var count = 0

  for (i in 0 until n) {
    for (j in m - 1 downTo 0) {
      if (b[j] % a[i] == 0) {
        ratio = max(ratio, b[j] / a[i])
      }
    }
  }

  for (i in 0 until n) {
    for (j in m - 1 downTo 0) {
      if (b[j] % a[i] == 0 && b[j] / a[i] == ratio) {
        count++
      }
    }
  }

  print(count)
}
