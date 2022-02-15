
#include <stdio.h>

int main(void) {
  long denominations[] = { 100, 20, 10, 5, 1 };
  long bills = 0;
  long n;

  scanf("%ld", &n);

  for (int d = 0; d < 5; d++) {
    bills += n / denominations[d];
    n %= denominations[d];
  }

  printf("%ld", bills);

  return 0;
}
