import java.lang.Integer.max

fun main() {
  readLine()
  val v = readLine()!!.split(" ").map(String::toInt)
  var maxLength = 1
  var maxSoFar = 1

  for (i in 1 until v.size) {
    if (v[i] > v[i-1]) {
      maxSoFar++
      maxLength = max(maxLength, maxSoFar)
    } else {
      maxSoFar = 1
    }
  }

  print(maxLength)
}
