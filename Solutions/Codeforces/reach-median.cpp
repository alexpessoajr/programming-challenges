
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ll n, s, x, sum;
  vector<ll> v;

  cin >> n >> s;

  for (ll i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end());

  sum = 0;

  if (v[n/2] < s) {
    for (ll i = n/2; i < n; i++) {
      if (v[i] >= s) break; 
      sum += s - v[i];
    }
  } else if (v[n/2] > s) {
    for (ll i = n/2; i >= 0; i--) {
      if (v[i] <= s) break;
      sum += v[i] - s;
    }
  }

  cout << sum << endl;

  return 0;
}
