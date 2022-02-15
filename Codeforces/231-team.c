
#include <stdio.h>

int main(void) {
  int n, p, v, t;
  int sum = 0;
  
  scanf("%d", &n);
  
  for (int i = 0; i < n; i++) {
    scanf("%d %d %d", &p, &v, &t);

    if (p + v + t > 1) {
      sum++;
    }
  }

  printf("%d", sum);

  return 0;
}
