import kotlin.math.max

fun main() {
  var (n, e) = readLine()!!.split(" ").map(String::toInt)
  var newbieTeams = 0
  var expertTeams = 0

  while (n >= 2 && e > 0) { // 2 newbies, 1 expert
    newbieTeams++
    n -= 2
    e--
  }

  var teams = newbieTeams

  while (e >= 2) { // 2 experts, 1 newbie
    if (n > 0) {
      expertTeams++
      e -= 2
      n--
    } else {
      if (newbieTeams == 0) break
      newbieTeams--
      n += 2
      e++
    }
    teams = max(teams, newbieTeams + expertTeams)
  }

  print(teams)
}
