
#include <bits/stdc++.h>

using namespace std;

int main() {
  string record;
  int a = 0, b = 0;

  cin >> record;

  for (int i = 0; i < record.length(); i += 2) {
    if (record[i] == 'A') a += record[i + 1] - '0';
    if (record[i] == 'B') b += record[i + 1] - '0';
  }

  cout << (a > b ? "A" : "B") << endl;

  return 0;
}
