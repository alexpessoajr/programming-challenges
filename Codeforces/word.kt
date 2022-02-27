fun countUppercasedLetters(word: String): Int {
  val uppercased = word.toUpperCase()
  var count = 0

  for (i in 0 until word.length) {
    if (word[i] == uppercased[i]) {
      count++
    }
  }
  return count
}

fun toVasyaCase(word: String): String {
  return if (countUppercasedLetters(word) > word.length / 2)
    word.toUpperCase()
  else
    word.toLowerCase()
}

fun main() {
  print(toVasyaCase(readLine()!!))
}
