
#include <stdio.h>

int main (void) {
  int t, n, x, w[3];
  
  scanf("%d", &t);
  
  for (int i = 0; i < t; i++) {
    w[1] = w[2] = 0;
    scanf("%d", &n);

    for (int j = 0; j < n; j++) {
      scanf("%d", &x);
      w[x]++;
    }
    
    if (w[1] % 2 == 0) {
      if (w[2] % 2 == 0 || w[1] >= 2) {
        printf("YES\n");
        continue;
      }
    }
    
    printf("NO\n");
  }

  return 0;
}

