fun main() {
  for (case in 0 until readLine()!!.toInt()) {
    var s = readLine()!!
    var letters = s.split("").filter { it.isNotBlank() }

    if (letters.toSet().size > 1) {
      println(letters.sorted().joinToString(""))
    } else {
      println("-1")
    }
  }
}
