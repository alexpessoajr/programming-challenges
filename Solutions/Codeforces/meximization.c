
#include <stdio.h>
#include <stdbool.h>

#define MAXN 110

int main() {
  int t, n, x, v[MAXN];

  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);
    for (int i = 0; i < MAXN; i++) {
      v[i] = 0;
    }
    for (int i = 0; i < n; i++) {
      scanf("%d", &x);
      v[x]++;
    }
    bool first = true;
    for (int i = 0; i < MAXN; i++) {
      if (v[i] > 0) {
        if (!first) printf(" ");
        first = false;
        printf("%d", i);
        v[i]--;
      }
    }
    for (int i = 0; i < MAXN; i++) {
      while (v[i] > 0) {
        printf(" %d", i);
        v[i]--;
      }
    }
    printf("\n");
  }

  return 0;
}
