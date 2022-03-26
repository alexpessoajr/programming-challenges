
fun main() {
  repeat(readLine()!!.toInt()) {
    readLine()
    val a = readLine()!!.split(" ").map(String::toInt)
    for (i in a.indices) {
      if (a.count { it == a[i] } == 1) {
        println(i + 1)
        break
      }
    }
  }
}
