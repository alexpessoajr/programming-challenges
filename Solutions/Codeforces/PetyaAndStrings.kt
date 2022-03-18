import java.util.Scanner

fun main() {
  val scanner = Scanner(System.`in`)
  val line1 = scanner.nextLine().toLowerCase()
  val line2 = scanner.nextLine().toLowerCase()
  print(line1.compareTo(line2).coerceIn(-1, 1))
}

