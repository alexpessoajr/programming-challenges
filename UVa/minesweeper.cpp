
#include <bits/stdc++.h>

using namespace std;

int n, m, f = 1;
char table[110][110];
int field[110][110];

bool check_mine(int row, int column) {
  if (row >= 0 && row < n && column >= 0 && column < m) {
    if (table[row][column] == '*') {
      return true;
    }
  }
  return false;
}

int main () {
  bool first = true;

  while (cin >> n >> m && n + m > 0) {
    for (int i = 0; i < n; i++) {
      cin >> table[i];
    }
    for (int r = 0; r < n; r++) {
      for (int c = 0; c < m; c++) {
        if (table[r][c] == '*') {
          field[r][c] = -1;
        } else {
          field[r][c] = 0;
        }
      }
    }
    for (int r = 0; r < n; r++) {
      for (int c = 0; c < m; c++) {
        if (table[r][c] != '*') {
          int count = 0;
          if (check_mine(r-1, c-1)) count++;
          if (check_mine(r-1, c)) count++;
          if (check_mine(r-1, c+1)) count++;
          if (check_mine(r, c-1)) count++;
          if (check_mine(r, c+1)) count++;
          if (check_mine(r+1, c-1)) count++;
          if (check_mine(r+1, c)) count++;
          if (check_mine(r+1, c+1)) count++;
          field[r][c] = count;
        }
      }
    }
    if (!first) {
      cout << endl;
    }
    first = false;
    cout << "Field #" << f++ << ":" << endl;
    for (int r = 0; r < n; r++) {
      for (int c = 0; c < m; c++) {
        if (field[r][c] == -1) {
          cout << '*';
        } else {
          cout << field[r][c];
        }
      }
      cout << endl;
    }
  }

  return 0;
}
