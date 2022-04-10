
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x, ans = 0, maxv = 0;
  vector<int> v;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
    maxv = max(maxv, x);
  }

  for (int i = 0; i < n; i++) {
    ans += maxv - v[i];
  }

  cout << ans << endl;

  return 0;
}
