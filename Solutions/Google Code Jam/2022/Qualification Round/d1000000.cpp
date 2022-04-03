
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ll t, n, s, maxl;
  vector<int> v;

  cin >> t;

  for (ll tc = 1; tc <= t; tc++) {
    v.clear();
    maxl = 0;

    cin >> n;

    for (ll i = 0; i < n; i++) {
      cin >> s;
      v.push_back(s);
    }

    sort(v.begin(), v.end());

    ll last = 1;

    for (ll i = 0; i < n; i++) {
      if (v[i] >= last) {
        maxl++;
        last++;
      }
    }

    cout << "Case #" << tc << ": " << maxl << endl;
  }

  return 0;
}
