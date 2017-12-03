
#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

ll one = 1;

int count_bits (ll n) {
  int i = 1;
  int count = 0;

  for (i = 0; i <= 60; i++) {
    if (n & (one << i)) {
      count++;
    }
  }
  return count;
}

int main (void) {
  int t, tc, n, q, i, j, s, x, y, o;

  scanf("%d", &t);

  for (tc = 0; tc < t; tc++) {
    ll sets[10010];
    ll st;
    int p = 0;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
      scanf("%d", &s);
      st = 0;
      for (j = 0; j < s; j++) {
        scanf("%d", &x);
        st |= one << x;
      }
      sets[++p] = st;
    }
    
    scanf("%d", &q);

    for (i = 0; i < q; i++) {
      scanf("%d %d %d", &o, &x, &y);
      if (o == 1) {
        printf("%d\n", count_bits(sets[x] & sets[y]));
      } else if (o == 2) {
        printf("%d\n", count_bits(sets[x] | sets[y]));
      }
    }
  }

  return 0;
}
