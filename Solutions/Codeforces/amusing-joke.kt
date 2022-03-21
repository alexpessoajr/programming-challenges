
fun main() {
  val guestname = readLine()!!
  val hostname = readLine()!!
  val pile = readLine()!!
  var answer = "YES"
  var lettersCount = mutableMapOf<Char, Int>()

  for (letter in guestname) {
    if (!lettersCount.containsKey(letter)) {
      lettersCount[letter] = 0
    }
    lettersCount[letter] = lettersCount[letter]!! + 1
  }

  for (letter in hostname) {
    if (!lettersCount.containsKey(letter)) {
      lettersCount[letter] = 0
    }
    lettersCount[letter] = lettersCount[letter]!! + 1
  }

  for (letter in pile) {
    if (lettersCount.containsKey(letter)) {
      lettersCount[letter] = lettersCount[letter]!! - 1
    } else {
      answer = "NO"
    }
  }

  for (v in lettersCount.values) {
    if (v != 0) {
      answer = "NO"
    }
  }

  println(answer)
}
