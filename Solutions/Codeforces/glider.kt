import kotlin.math.max
import kotlin.math.min

fun main() {
  var (n, h) = readLine()!!.split(" ").map(String::toInt)
  val maxh = h
  val v = arrayListOf<Pair<Int, Int>>()
  var d = 0
  var i = 0
  var j = 0

  repeat(n) {
    val (a, b) = readLine()!!.split(" ").map(String::toInt)
    v.add(Pair(a, b))
  }

  d = max(d, v[j].second - v[i].first + h)

  while (j + 1 < v.size) {
    if (h > v[j + 1].first - v[j].second) {
      h -= v[j + 1].first - v[j].second
      j++
    } else {
      h += v[i + 1].first - v[i].second
      h = min(maxh, h)
      i++
      j = max(j, i)
    }
    d = max(d, v[j].second - v[i].first + h)
  }

  print(d)
}
