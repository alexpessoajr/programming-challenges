
fun main() {
  readLine()
  val events = readLine()!!.split(" ").map(String::toInt)
  var cops = 0
  var untreatedCrimes = 0

  for (event in events) {
    if (event > 0) {
      cops += event
    } else {
      if (cops == 0) {
        untreatedCrimes++
      } else {
        cops--
      }
    }
  }

  println(untreatedCrimes)
}
