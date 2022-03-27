import kotlin.math.abs

fun main() {
  repeat(readLine()!!.toInt()) {
    val keyboard = readLine()!!
    val word = readLine()!!
    var t = 0

    for (i in 1 until word.length) {
      t += abs(keyboard.indexOf(word[i-1]) - keyboard.indexOf(word[i]))
    }
    println(t)
  }
}