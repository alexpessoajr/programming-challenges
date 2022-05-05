
#include <bits/stdc++.h>

using namespace std;

int eval(int x, int a) {
  return floor(x / a) + (x % a);
}

int main() {
  int t, l, r, a;

  cin >> t;

  while (t--) {
    cin >> l >> r >> a;
    cout << max(eval(max(l, r - (r % a) - 1), a), eval(r, a)) << endl;
  }

  return 0;
}
