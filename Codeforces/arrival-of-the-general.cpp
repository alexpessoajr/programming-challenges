
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
  int n;
  int soldiers[110];

  cin >> n;

  REP(i, 0, n-1) cin >> soldiers[i];

  int first_max_idx = 0;
  int last_min_idx = 0;

  REP(i, 0, n-1) {
    if (soldiers[i] > soldiers[first_max_idx]) {
      first_max_idx = i;
    }
    if (soldiers[i] <= soldiers[last_min_idx]) {
      last_min_idx = i;
    }
  }

  int count = 0;

  count += first_max_idx;
  count += n - last_min_idx - 1;

  if (first_max_idx > last_min_idx) count--;

  cout << count << endl;

  return 0;
}
