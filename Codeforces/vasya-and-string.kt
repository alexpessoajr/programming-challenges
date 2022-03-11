import kotlin.math.max
import kotlin.math.min

fun maxLength(s: String, charToChange: Char, k: Int): Int {
  var maxLength = 0
  var n = s.length
  var r = k
  var i = 0
  var j = 0

  while (i < n && j < n) {
    if (s[j] != charToChange) {
      j++
      maxLength = max(maxLength, j - i)
    } else if (r > 0) {
      r--
      j++
      maxLength = max(maxLength, j - i)
    } else {
      if (s[i] == charToChange) r = min(k, r + 1)
      i++
      j = max(j, i)
    }
  }

  return maxLength
}

fun main() {
  val (n, k) = readLine()!!.split(" ").map(String::toInt)
  val s = readLine()!!
  print(max(maxLength(s, 'a', k), maxLength(s, 'b', k)))
}
