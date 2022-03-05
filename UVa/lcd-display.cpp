
#include <bits/stdc++.h>

using namespace std;

void repeat_char(char c, int times) {
  while (times-- > 0) cout << c;
}

void print_row(int digit, int row, int size) {
  if (row == 0) { // top
    cout << " ";
      if (digit == 1 || digit == 4) {
        repeat_char(' ', size);
      } else {
        repeat_char('-', size);
      }
    cout << " ";
  } else if (row == size + 1) { // mid
    cout << " ";
      if (digit == 1 || digit == 7 || digit == 0) {
        repeat_char(' ', size);
      } else {
        repeat_char('-', size);
      }
    cout << " ";
  } else if (row == (size + 1) * 2) { // bottom
    cout << " ";
      if (digit == 1 || digit == 7 || digit == 4) {
        repeat_char(' ', size);
      } else {
        repeat_char('-', size);
      }
    cout << " ";
  } else {
    if (row < size + 1) {
      if (digit == 1 || digit == 2 || digit == 3 || digit == 7) {
        cout << " ";
      } else {
        cout << "|";
      }
      repeat_char(' ', size);
      if (digit == 5 || digit == 6) {
        cout << " ";
      } else {
        cout << "|";
      }
    } else {
      if (digit == 1 || digit == 3 || digit == 4 || digit == 5 || digit == 7 || digit == 9) {
        cout << " ";
      } else {
        cout << "|";
      }
      repeat_char(' ', size);
      if (digit == 2) {
        cout << " ";
      } else {
        cout << "|";
      }
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
