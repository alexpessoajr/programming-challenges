
fun main() {
  val v = readLine()!!.split(" ").map(String::toInt)
  var answer = "NO"

  for (i in 0 until v.size - 2) {
    for (j in i + 1 until v.size) {
      for (k in j + 1 until v.size) {
        val teamScore = v[i] + v[j] + v[k]
        if (teamScore == (v.sum() - teamScore)) {
          answer = "YES"
        }
      }
    }
  }

  println(answer)
}