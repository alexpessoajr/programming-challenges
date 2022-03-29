
fun main() {
  val remix = readLine()!!
  val music = remix.replace("WUB", " ").replace(Regex("\\s+"), " ").trim()
  println(music);
}
