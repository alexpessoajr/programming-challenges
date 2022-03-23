
fun inverted(s: String): String {
  var result = ""
  for (c in s) {
    result += if (c == '1') "2" else "1"
  }
  return result
}

fun build(): Array<String> {
  var memo = Array<String>(1010) { "" }
  var answer = "1"
  var op = 1

  memo[1] = answer

  for (i in 2..1000) {
    if (op == 1) { // invert
      answer = inverted(answer)
      op++
    } else if (op == 2) { // add 1
      answer += "1"
      op++
    } else if (op == 3) { // invert and add 1
      answer = inverted(answer) + "1"
      op = 1
    }
    memo[i] = answer
  }
  return memo
}

fun main() {
  val memo = build()
  repeat(readLine()!!.toInt()) {
    println(memo[readLine()!!.toInt()])
  }
}
