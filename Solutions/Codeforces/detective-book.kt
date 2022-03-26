
fun main() {
  readLine()
  val book = readLine()!!.split(" ").map(String::toInt)
  var days = 0
  var nextMystery = 1
  var page: Int

  for (i in 1..book.size) {
    page = i - 1
    if (book[page] > nextMystery) {
      nextMystery = book[page]
    }
    if (nextMystery <= i) {
      days++
    }
  }

  println(days)
}
