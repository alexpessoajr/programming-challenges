
fun main() {
  val a = readLine()!!
  val b = readLine()!!

  for (i in a.indices) {
    print(if (a[i] != b[i]) 1 else 0)
  }
}
