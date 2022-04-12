
#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

int main() {
  int t;

  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    sort(all(a));
    sort(all(b));
    reverse(all(b));

    for (int i = 0; i < k; i++) {
      if (a[i] < b[i]) {
        a[i] = b[i];
      }
    }

    cout << accumulate(all(a), 0) << endl;
  }

  return 0;
}
