
fun main() {
  val k = readLine()!!.toInt()
  val l = readLine()!!.toInt()
  val m = readLine()!!.toInt()
  val n = readLine()!!.toInt()
  val d = readLine()!!.toInt()
  val v = arrayOfNulls<Boolean>(d + 1)

  for (x in arrayOf(k, l, m, n)) {
    for (i in 1..d) {
      if (x * i > d) break
      v[x * i] = true
    }
  }

  print(1 + d - v.count { it == null })
}
