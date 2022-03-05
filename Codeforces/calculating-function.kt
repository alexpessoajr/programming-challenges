
fun main() {
  val n = readLine()!!.toBigInteger()
  val two = 2.toBigInteger()
  print(
    if (n % two == 0.toBigInteger()) {
      n / two
    } else {
      -n / two - 1.toBigInteger()
    }
  )
}
