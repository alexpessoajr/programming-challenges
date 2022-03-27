import java.lang.Integer.max

fun main() {
  readLine()
  val claws = readLine()!!.split(" ").map(String::toInt)
  val killedBy = Array<Int>(claws.size) { 0 }

  for (i in claws.indices) {
    if (claws[i] > 0) {
      killedBy[max(0, i - claws[i])] = i
    }
  }

  var maxSoFar = -1
  var alivePeople = 0

  for (i in killedBy.indices) {
    if (i >= maxSoFar && killedBy[i] == 0) {
      alivePeople++
    }
    if (killedBy[i] > maxSoFar) maxSoFar = killedBy[i]
  }

  println(alivePeople)
}
