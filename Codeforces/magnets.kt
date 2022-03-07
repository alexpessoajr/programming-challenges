
fun main() {
  val n = readLine()!!.toInt()
  var groups = 1
  var magnet = readLine()!!

  for (i in 1 until n) {
    val x = readLine()!!
    if (magnet != x) {
      groups++
      magnet = x
    }
  }

  print(groups)
}
