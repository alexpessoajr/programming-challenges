
#include <stdio.h>

int main(void) {
  int n, s = 0;
  char op[4];
  
  scanf("%d", &n);
  
  for (int i = 0; i < n; i++) {
    scanf("%s", op);
    
    if (op[1] == '+') {
      s++;
    } else {
      s--;
    }
  }
  
  printf("%d", s);
  
  return 0;
}

