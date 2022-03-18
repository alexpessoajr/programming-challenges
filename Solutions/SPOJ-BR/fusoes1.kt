
class UnionFind {
  private val parent: Array<Int>
  private val size: Array<Int>

  constructor(size: Int) {
    this.parent = Array<Int>(size + 1) { it }
    this.size = Array(size + 1) { 1 }
  }

  fun connect(a: Int, b: Int) {
    var x = find(a)
    var y = find(b)
    if (x != y) {
      if (size[x] > size[y]) {
        x = y.also { y = x }
      }
      parent[x] = y
      size[y] += size[x]
    }
  }

  fun isConnected(a: Int, b: Int): Boolean = find(a) == find(b)

  private fun find(x: Int): Int = if (parent[x] == x) x else {
    find(parent[x]).also {
      parent[x] = it
    }
  }
}

fun main() {
  val (n, k) = readLine()!!.split(" ").map(String::toInt)
  val dsu = UnionFind(n)
  repeat(k) {
    val (o, a, b) = readLine()!!.split(" ")
    when (o) {
      "C" -> println(if (dsu.isConnected(a.toInt(), b.toInt())) "S" else "N")
      "F" -> dsu.connect(a.toInt(), b.toInt())
    }
  }
}
