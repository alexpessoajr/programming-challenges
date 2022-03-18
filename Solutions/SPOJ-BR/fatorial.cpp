
#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n, x, caseNumber = 1, f = 1;
  ll fat[1000010];

  for (ll i = 1; i <= 1000000; i++) {
    x = i;
    while (x % 10 == 0) x /= 10;
    while (f % 10 == 0) f /= 10;
    x %= 1000000;
    f %= 1000000;
    f = f * x;
    while (f % 10 == 0) f /= 10;
    fat[i] = f % 10;
  }

  while (cin >> n) {
    cout << "Instancia " << caseNumber++ << endl;
    cout << fat[n] << endl;
    cout << endl;
  }

  return 0;
}
