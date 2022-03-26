
fun main() {
  readLine()
  val contests = readLine()!!.split(" ").map(String::toInt)
  var maxSoFar = contests[0]
  var minSoFar = contests[0]
  var amazingCount = 0

  for (i in 1 until contests.size) {
    if (contests[i] > maxSoFar) {
      maxSoFar = contests[i]
      amazingCount++
    } else if (contests[i] < minSoFar) {
      minSoFar = contests[i]
      amazingCount++
    }
  }

  println(amazingCount)
}
