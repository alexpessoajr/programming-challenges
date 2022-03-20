
fun main() {
  var exp = readLine()!!
  exp = exp.substring(1, exp.length - 1)
  var letters = exp.split(",").map { it.trim() }.filter { it.isNotBlank() }

  println(letters.toSet().size)
}