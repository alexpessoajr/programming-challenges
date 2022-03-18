
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

  int n, k, a, b;
  int id[100010];
  vi elements[100010];
  char op;

  cin >> n >> k;

  REPEAT(n) {
    id[it] = it;
    elements[it].PB(it);
  }

  REPEAT(k) {
    cin >> op >> a >> b;
    if (op == 'C') {
      cout << (id[a] == id[b] ? "S" : "N") << endl;
    } else if (op == 'F') {
      int id_a = id[a];
      int id_b = id[b];

      if (elements[id_a].size() > elements[id_b].size()) {
        id_a = id[b];
        id_b = id[a];
      }

      while (!elements[id_a].empty()) {
        int x = elements[id_a].back();
        elements[id_a].pop_back();
        elements[id_b].push_back(x);
        id[x] = id_b;
      }
    }
  }

  return 0;
}
