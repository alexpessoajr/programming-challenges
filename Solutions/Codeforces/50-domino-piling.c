
#include <stdio.h>

int main(void) {
  int m, n;
  
  scanf("%d %d", &m, &n);
  
  int s = m/2 * n;
  
  if (m % 2 != 0) {
    s += n/2;
  }

  printf("%d", s);  
  
  return 0;
}

