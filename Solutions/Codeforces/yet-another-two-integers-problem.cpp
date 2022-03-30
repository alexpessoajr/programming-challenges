
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, a, b;

  cin >> t;

  while (t--) {
    cin >> a >> b;
    if (abs(a - b) % 10 != 0) {
      cout << abs(a - b)/10 + 1 << endl;
    } else {
      cout << abs(a - b)/10 << endl;
    }
  }

  return 0;
}
