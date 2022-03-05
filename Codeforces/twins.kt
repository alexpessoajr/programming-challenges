
fun main() {
  readLine()
  val v = readLine()!!.split(" ").map(String::toInt).sorted().reversed()
  val totalSum = v.sum()
  var sumSoFar = 0
  var coins = 0

  for (i in v.indices) {
    sumSoFar += v[i]
    coins++
    if (sumSoFar > (totalSum - sumSoFar)) {
      print(coins)
      break
    }
  }
}
