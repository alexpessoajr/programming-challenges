
const val INF = 0x3f3f3f3f;

val memo = IntArray(4010) { -INF }

fun solve(n: Int, a: Int, b: Int, c: Int): Int {
  if (n == 0) return 0
  if (n < 0) return -INF
  if (n < a && n < b && n < c) return -INF
  if (memo[n] != -INF) return memo[n]

  memo[n] = maxOf(
    1 + solve(n - a, a, b, c),
    1 + solve(n - b, a, b, c),
    1 + solve(n - c, a, b, c),
  )

  return memo[n]
}

fun main() {
  val (n, a, b, c) = readLine()!!.split(" ").map(String::toInt)
  print(solve(n, a, b, c));
}
