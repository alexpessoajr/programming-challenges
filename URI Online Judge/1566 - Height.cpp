#include <bits/stdc++.h>

using namespace std;

int main (void) {
  int tc, n, x;
  int h[240];

  scanf("%d", &tc);

  for (int i = 0; i < tc; i++) {
    scanf("%d", &n);

    for (int i = 20; i <= 230; i++) {
      h[i] = 0;
    }

    for (int i = 0; i < n; i++) {
      scanf("%d", &x);
      h[x]++;
    }

    bool first_value = true;

    for (int i = 20; i <= 230; i++) {
      while (h[i] > 0) {
        if (first_value) {
          printf("%d", i);
        } else {
          printf(" %d", i);
        }
        first_value = false;
        h[i]--;
      }
    }

    printf("\n");
  }

  return 0;
}
