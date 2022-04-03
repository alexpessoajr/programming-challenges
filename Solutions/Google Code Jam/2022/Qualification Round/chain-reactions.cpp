
#include <bits/stdc++.h>

#define MAXN 100010

using namespace std;

typedef long long ll;

ll t, n;
ll fun_factor[MAXN], p[MAXN], deg[MAXN];
vector<ll> adj[MAXN];
ll maxf = 0;

ll dfs(ll u) {
  if (deg[u] == 0) {
    return fun_factor[u];
  } else if (deg[u] == 1) {
    return max(fun_factor[u], dfs(adj[u][0]));
  } else {
    ll r;
    ll minf = LLONG_MAX;
    for (ll v : adj[u]) {
      r = dfs(v);
      minf = min(minf, r);
      maxf += r;
    }
    maxf -= minf;
    return max(fun_factor[u], minf);
  }
}

int main() {
  cin >> t;

  for (ll tc = 1; tc <= t; tc++) {
    cin >> n;

    maxf = 0;

    for (ll i = 1; i <= n; i++) {
      cin >> fun_factor[i];
      adj[i].clear();
      deg[i] = 0;
    }

    for (ll i = 1; i <= n; i++) {
      cin >> p[i];
      deg[p[i]]++;
      if (p[i] != 0) {
        adj[p[i]].push_back(i);
      }
    }

    for (ll i = 1; i <= n; i++) {
      if (p[i] == 0) {
        maxf += dfs(i);
      }
    }

    cout << "Case #" << tc << ": " << maxf << endl;
  }

  return 0;
}
