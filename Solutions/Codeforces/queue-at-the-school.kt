
fun main() {
  val (n, t) = readLine()!!.split(" ").map(String::toInt)
  val queue = readLine()!!.toCharArray()

  repeat(t) {
    var i = 0
    while (i < queue.size - 1) {
      if (queue[i] == 'B' && queue[i + 1] == 'G') {
        queue[i] = 'G'
        queue[i + 1] = 'B'
        i++
      }
      i++
    }
  }
  print(queue.joinToString(""))
}
