import kotlin.math.max

fun main() {
  var maxCapacity = 0
  var capacity = 0
  repeat(readLine()!!.toInt()) {
    val (a, b) = readLine()!!.split(" ").map(String::toInt)
    capacity -= a
    capacity += b
    maxCapacity = max(maxCapacity, capacity)
  }
  print(maxCapacity)
}
