
#include <bits/stdc++.h>

#define MAXN 300010

using namespace std;

typedef long long ll;

int n;
bool seen[MAXN] = { false };
vector<int> adj[MAXN];

void dfs (int u) {
  seen[u] = true;
  for (int v : adj[u]) {
    if (!seen[v] && v != n)  {
      dfs(v);
    }
  }
}

int main() {
  int m, u, v;

  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  dfs(n-1);

  for (int i = 1; i <= n; i++) {
    cout << (seen[i] ? 'B' : 'A');
  }
  cout << endl;

  return 0;
}
