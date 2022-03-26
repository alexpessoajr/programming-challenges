
fun main() {
  val num = readLine()!!.reversed()
  var count = 0
  var answer = "no"

  for (digit in num) {
    if (digit == '0') {
      count++
    } else if (count >= 6) {
      answer = "yes"
    }
  }

  println(answer)
}
