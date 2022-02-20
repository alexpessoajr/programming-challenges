
#include <stdio.h>
#include <string.h>

int main (void) {
  char s[110];
  int e[4] = { 0, 0, 0, 0 };
  int ct = 0;

  scanf("%s", s);

  for (int i = 0; i < strlen(s); i += 2) {
    e[s[i]-'0']++;
    ct++;
  }

  while (ct > 0) {
    if (e[1]-- > 0) {
      printf("1");
    } else if (e[2]-- > 0) {
      printf("2");
    } else if (e[3]-- > 0) {
      printf("3");
    }

    ct--;

    if (ct > 0) {
      printf("+");
    }
  }

  return 0;
}

