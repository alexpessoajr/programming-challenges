
fun main() {
  val t = readLine()!!.toInt()

  repeat(t) {
    readLine()
    val v = readLine()!!.split(" ").map(String::toInt).reversed()
    var answer = "NO"
    for (i in 1 until v.size) {
      if (v[i] > v[i-1]) {
        answer = "YES"
        break
      }
    }
    println(answer)
  }
}
