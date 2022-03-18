
fun main() {
  val n = readLine()!!.toInt()

  repeat(n) {
    val last  = (it == n - 1)
    val odd = (it + 1) % 2 != 0
    print("I ")
    print(if (odd) "hate " else "love ")
    print(if (last) "it" else "that ")
  }
}
