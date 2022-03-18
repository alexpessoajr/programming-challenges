
fun main() {
  val s = readLine()!!
  var c = 0

  for (i in s.indices) {
    for (j in i + 1 until s.length) {
      for (k in j + 1 until s.length) {
        if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q') {
          c++
        }
      }
    }
  }

  print(c)
}
