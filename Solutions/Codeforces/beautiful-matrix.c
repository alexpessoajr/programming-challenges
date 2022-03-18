
#include <stdio.h>
#include <stdlib.h>

#define MATRIX_SIZE 5
#define MIDDLE 3

int main (void) {
  int x, y, n;
  
  for (int i = 1; i <= MATRIX_SIZE; i++) {
    for (int j = 1; j <= MATRIX_SIZE; j++) {
      scanf("%d", &n);
      if (n == 1) {
        x = i;
        y = j;
      }
    }
  }

  printf("%d", abs(x - MIDDLE) + abs(y - MIDDLE));

  return 0;
}

