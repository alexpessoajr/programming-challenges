
fun main() {
  repeat(readLine()!!.toInt()) {
    val (n, m) = readLine()!!.split(" ").map(String::toInt)
    val image = arrayListOf<String>()
    var missingPixels = 0
    var innerPixels = 0

    repeat(n) {
      image.add(readLine()!!)
    }

    for (i in 0 until m) {
      if (image[0][i] == '0') missingPixels++
      if (image[n-1][i] == '0') missingPixels++
    }
    for (i in 1 until n - 1) {
      if (image[i][0] == '0') missingPixels++
      if (image[i][m-1] == '0') missingPixels++
    }

    for (i in 1 until n - 1) {
      for (j in 1 until m - 1) {
        if (image[i][j] == '1') innerPixels++
      }
    }

    if (innerPixels >= missingPixels) {
      println(missingPixels)
    } else {
      println(-1)
    }
  }
}
