
fun main() {
  val s = readLine()!!
  var i = 0

  while (i < s.length) {
    if (i + 1 < s.length && s[i] == '-' && s[i + 1] == '-') {
      print(2)
      i += 2
    } else if (i + 1 < s.length && s[i] == '-' && s[i + 1] == '.') {
      print(1)
      i += 2
    } else if (s[i] == '.') {
      print(0)
      i++
    }
  }
}

