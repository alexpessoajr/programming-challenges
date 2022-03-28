
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ll n, s = 1;
  ll maxb = 1;

  cin >> n;

  while (s < n) {
    s += (1 << maxb++);
  }

  cout << maxb << endl;

  return 0;
}
