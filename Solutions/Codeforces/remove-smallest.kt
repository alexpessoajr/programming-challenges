
fun main() {
  repeat(readLine()!!.toInt()) {
    val n = readLine()!!.toInt()
    val v = readLine()!!.split(" ").map(String::toInt).sorted()
    var answer = "YES"

    for (i in 1 until v.size) {
      if (v[i] - v[i - 1] > 1) {
        answer = "NO"
      }
    }

    println(answer)
  }
}
