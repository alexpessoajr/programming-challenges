
fun main() {
  val n = readLine()!!.toInt()
  val parent = mutableMapOf<String, String>()
  val aliases = mutableSetOf<String>()

  repeat(n) {
    val (oldUsername, newUsername) = readLine()!!.split(" ")
    parent[oldUsername] = newUsername
    aliases.add(newUsername)
  }

  val namesToPrint = parent.keys - aliases

  println(namesToPrint.size)

  for (firstName in namesToPrint) {
    var lastName = firstName
    while (parent.containsKey(lastName)) {
      lastName = parent[lastName]!!
    }
    println("$firstName $lastName")
  }
}
