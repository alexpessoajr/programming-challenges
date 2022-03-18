
#include <bits/stdc++.h>

using namespace std;

void repeat_char(char c, int times, bool space_around = false) {
  if (space_around) cout << ' ';
  while (times-- > 0) cout << c;
  if (space_around) cout << ' ';
}

void print_row(int d, int row, int size) {
  if (row == 0) repeat_char((d == 1 || d == 4) ? ' ' : '-', size, true);
  else if (row == size + 1) repeat_char((d == 1 || d == 7 || d == 0) ? ' ' : '-', size, true);
  else if (row == (size + 1) * 2) repeat_char((d == 1 || d == 7 || d == 4) ? ' ' : '-', size, true);
  else {
    if (row < size + 1) {
      cout << ((d == 1 || d == 2 || d == 3 || d == 7) ? ' ' : '|');
      repeat_char(' ', size);
      cout << ((d == 5 || d == 6) ? ' ' : '|');
    } else {
      cout << ((d == 1 || d == 3 || d == 4 || d == 5 || d == 7 || d == 9) ? ' ' : '|');
      repeat_char(' ', size);
      cout << ((d == 2) ? ' ' : '|');
    }
  }
}

int main() {
  int n, s;

  while (cin >> s >> n && s + n > 0) {
    string display = to_string(n);

    for (int i = 0; i < 3 + 2*s; i++) {
      bool first = true;
      for (int j = 0; j < display.length(); j++) {
        if (!first) cout << " ";
        first = false;
        print_row(display[j] - '0', i, s);
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
