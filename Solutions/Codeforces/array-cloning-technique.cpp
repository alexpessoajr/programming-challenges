
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;

  cin >> t;

  while (t--) {
    int n, x, maxd = 0, ans = 0;
    map<int, int> m;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
      cin >> x;
      m[x]++;
      maxd = max(maxd, m[x]);
    }

    while (maxd < n) {
      // clone operation
      ans++;
      // swap operations
      int i = 0;
      while (i < maxd && maxd + i < n) {
        ans++;
        i++;
      }
      maxd *= 2;
    }

    cout << ans << endl;
  }

  return 0;
}
