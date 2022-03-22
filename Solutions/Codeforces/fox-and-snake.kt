
fun main() {
  val (n, m) = readLine()!!.split(" ").map(String::toInt)

  for (i in 1..n) {
    for (j in 1..m) {
      if (i % 2 != 0) {
        print("#")
      } else {
        if ((i % 4 == 0 && j == 1) || (i % 4 != 0 && j == m)) {
          print("#")
        } else {
          print(".")
        }
      }
    }
    println()
  }
}