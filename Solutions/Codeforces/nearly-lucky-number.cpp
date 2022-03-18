
#include <bits/stdc++.h>

using namespace std;

bool is_lucky_number(int n) {
  if (n == 0) {
    return false;
  }
  while (n > 0) {
    if (n % 10 != 4 && n % 10 != 7) {
      return false;
    }
    n /= 10;
  }
  return true;
}

int main() {
  char n[20];
  int ln_count = 0;

  cin >> n;

  for (int i = 0; i < strlen(n); i++) {
    if (n[i] == '4' || n[i] == '7') {
      ln_count++;
    }
  }

  cout << (is_lucky_number(ln_count) ? "YES" : "NO") << endl;

  return 0;
}

