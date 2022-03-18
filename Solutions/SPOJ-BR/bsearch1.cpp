
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q, x;
  int v[100010] = { 0 };

  cin >> n >> q;

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < q; i++) {
    cin >> x;
    
    int l = 0;
    int r = n - 1;
    int m;

    while (l <= r) {
      m = (l + r) / 2;

      if (x < v[m]) {
        r = m - 1;
      } else if (x > v[m]) {
        l = m + 1;
      } else {
        break;
      }
    }

    if (v[m] == x) {
      cout << m << endl;
    } else {
      cout << "-1" << endl;
    }
  }

  return 0;
}
