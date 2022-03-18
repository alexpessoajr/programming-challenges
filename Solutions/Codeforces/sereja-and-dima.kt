
fun main() {
  val n = readLine()!!.toInt()
  val v = readLine()!!.split(" ").map(String::toInt)

  var i = 0
  var j = n - 1
  var dima = 0
  var sereja = 0

  for (t in 1..n) {
    var card = if (v[i] > v[j]) v[i++] else v[j--]
    if (t % 2 != 0) {
      sereja += card
    } else {
      dima += card
    }
  }

  print("$sereja $dima")
}
