
fun main() {
  for (i in (0 until readln().toInt())) {
    val x = readln().toInt()
    println(if (x % 2 == 0) x / 2 else (x - 3) / 2 + 1)
  }
}

