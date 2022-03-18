
#include <stdio.h>
#include <string.h>

int main (void) {
  int n, c = 0;
  char stones[60];
  
  scanf("%d", &n);
  scanf("%s", stones);
  
  for (int i = 1; i < strlen(stones); i++) {
    if (stones[i] == stones[i-1]) {
      c++;
    }
  }
  
  printf("%d", c);

  return 0;
}
