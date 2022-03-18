
data class Constraint(val minTime: Int, val maxTime: Int)

var constraints = mutableListOf<Constraint>()
var memo = Array(250) { Array<Boolean?>(35) { null } }
var solution = mutableListOf<Int>()

fun hasSolution(sumTime: Int, day: Int): Boolean {
  if (day == constraints.size && sumTime == 0) return true
  if (day == constraints.size) return false
  if (constraints[day].minTime > sumTime) return false
  if (day == constraints.size - 1 && constraints[day].maxTime < sumTime) return false
  if (memo[sumTime][day] != null) return memo[sumTime][day]!!

  for (i in constraints[day].minTime..constraints[day].maxTime) {
    if (hasSolution(sumTime - i, day + 1)) {
      memo[sumTime][day] = true
      return true
    }
  }
  memo[sumTime][day] = false
  return false
}

fun buildSolution(sumTime: Int) {
  var currentSum = sumTime

  for (j in 0 until constraints.size) {
    for (i in constraints[j].minTime..constraints[j].maxTime) {
      if (hasSolution(currentSum - i, j + 1)) {
        solution.add(i)
        currentSum -= i
        break
      }
    }
  }
}

fun main() {
  val (d, sumTime) = readLine()!!.split(" ").map(String::toInt)
  repeat(d) {
    val (minTime, maxTime) = readLine()!!.split(" ").map(String::toInt)
    constraints.add(Constraint(minTime, maxTime))
  }

  if (hasSolution(sumTime, 0)) {
    buildSolution(sumTime)
    println("YES")
    println(solution.joinToString(" "))
  } else {
    println("NO")
  }
}
