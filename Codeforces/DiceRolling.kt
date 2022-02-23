
fun main () {
  val n = readLine()!!.toInt()

  for (i in (0 until n)) {
    val x = readLine()!!.toInt()
    var ct: Int

    if (x % 2 == 0) {
      ct = x / 2
    } else {
      ct = (x - 3) / 2 + 1
    }

    println(ct)
  }
}

