
fun main() {
  repeat(readLine()!!.toInt()) {
    val engines = mutableListOf<String>()
    val queries = mutableListOf<String>()
    var count = 0

    repeat(readLine()!!.toInt()) { engines.add(readLine()!!) }
    repeat(readLine()!!.toInt()) { queries.add(readLine()!!) }

    val streak = mutableSetOf<String>()

    for (query in queries) {
      streak.add(query)
      if (streak.size == engines.size) {
        count++
        streak.clear()
        streak.add(query)
      }
    }

    println("Case #${it + 1}: $count")
  }
}
