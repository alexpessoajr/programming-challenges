
#include <stdio.h>

int main(void) {

  int n, r, c, d;
  
  scanf("%d", &n);

  for (int i = -n, r = -n; i <= n; i++, (i <= 0) ? r++ : r--) {
    for (int j = -n, c = 0; j <= n; j++, (j <= 0) ? c++ : c--) {
      d = r + c;
      if (d >= 0) {
        printf("%d", d);
      } else {
        printf(" ");
      }
      if (d == 0 && j >= 0) {
        break;
      }
      if (j < n) {
        printf(" ");
      }
    }
    if (i < n) printf("\n");
  }

  return 0;
}

