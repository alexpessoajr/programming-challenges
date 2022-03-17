
#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i <= b; i++)
#define REPEAT(times) for (int it = 1; it <= times; it++)

#define INF 0x3f3f3f3f
#define EPS 1e-9

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t, a, b;

  cin >> t;

  REPEAT(t) {
    cin >> a >> b;
    if (a <= b) {
      cout << b - a << endl;
    } else {
      cout << (b - a % b) % b << endl;
    }
  }

  return 0;
}
