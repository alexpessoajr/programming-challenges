
#include <stdio.h>

int main(void) {
  unsigned long long n, k, s;

  scanf("%llu %llu", &n, &k);

  if (k <= (n + 1)/2) {
    s = k * 2 - 1;
  } else {
    s = (k - (n + 1)/2) * 2;
  }

  printf("%llu", s);

  return 0;
}

