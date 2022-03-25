
fun main() {
  var faces = 0
  repeat(readLine()!!.toInt()) {
    when (readLine()!!) {
      "Tetrahedron" -> faces += 4
      "Cube" -> faces += 6
      "Octahedron" -> faces += 8
      "Dodecahedron" -> faces += 12
      "Icosahedron" -> faces += 20
    }
  }
  println(faces)
}