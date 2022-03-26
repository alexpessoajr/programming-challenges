import java.lang.Integer.min

fun main() {
  val (a, b) = readLine()!!.split(" ").map(String::toInt)
  println("${min(a, b)} ${kotlin.math.abs(a-b)/2}")
}
