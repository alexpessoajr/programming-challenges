import java.lang.Integer.min

fun areCoPrime(a: Int, b: Int): Boolean {
  for (i in 2..min(a, b)) {
    if (a % i == 0 && b % i == 0) {
      return false
    }
  }
  return true
}

fun main() {
  val n = readLine()!!.toInt()
  var a = 0
  var b = 1000

  for (i in n-2 downTo 1) {
    for (j in i + 1 until n) {
      if (i + j == n) {
        if (j - i < b - a) {
          if (areCoPrime(i, j)) {
            a = i
            b = j
          }
        }
      }
    }
  }

  print("$a $b")
}
