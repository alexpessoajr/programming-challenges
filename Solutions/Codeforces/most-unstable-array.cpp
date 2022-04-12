
#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

int main() {
  int t;

  cin >> t;

  while (t--) {
    int n, m, ans = 0;
    cin >> n >> m;

    if (n == 2) {
      ans = m;
    } else if (n > 2) {
      ans = m * 2;
    }

    cout << ans << endl;
  }

  return 0;
}
