
#include <bits/stdc++.h>

#define MAXSIZE 100

using namespace std;

int main() {
  int t, r, c;
  char card[MAXSIZE][MAXSIZE];

  cin >> t;

  for (int tc = 1; tc <= t; tc++) {
    cin >> r >> c;

    r = r * 2 + 1;
    c = c * 2 + 1;

    for (int i = 0; i < MAXSIZE; i++) {
      for (int j = 0; j < MAXSIZE; j++) {
        card[i][j] = '.';
      }
    }

    // +
    for (int i = 0; i <= r; i += 2) {
      for (int j = 0; j <= c; j += 2) {
        card[i][j] = '+';
      }
    }

    // -
    for (int i = 0; i <= r; i += 2) {
      for (int j = 1; j <= c; j += 2) {
        card[i][j] = '-';
      }
    }

    // |
    for (int i = 1; i <= r; i += 2) {
      for (int j = 0; j <= c; j += 2) {
        card[i][j] = '|';
      }
    }

    card[0][0] = '.';
    card[0][1] = '.';
    card[1][0] = '.';
    card[1][1] = '.';

    cout << "Case #" << tc << ":" << endl;

    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        cout << card[i][j];
      }
      cout << endl;
    }
  }

  return 0;
}
