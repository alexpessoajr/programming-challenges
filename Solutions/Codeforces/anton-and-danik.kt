
fun main() {
  readLine()
  val s = readLine()!!
  val a = s.count { it == 'A' }
  val d = s.count { it == 'D' }
  print(if (a > d) {
    "Anton"
  } else if (a < d) {
    "Danik"
  } else {
    "Friendship"
  })
}
