
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main (void) {
  char s[110];
  bool output = false;
  
  scanf("%[^\n]s", s);
  
  for (int i = 0; i <= strlen(s); i++) {
    if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
      output = true;
      break;
    }
  }

  printf(output ? "YES" : "NO");

  return 0;
}

