
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main (void) {
  char players[110];
  bool dangerous = false;
  int seg = 1;

  scanf("%s", players);

  for (int i = 1; i < strlen(players); i++) {
    if (players[i] == players[i-1]) {
      seg++;
      if (seg == 7) {
        dangerous = true;
        break;
      }
    } else {
      seg = 1;
    }
  }

  printf(dangerous ?  "YES" : "NO");

  return 0;
}

