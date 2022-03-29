
#include <bits/stdc++.h>

#define MAXN 100010

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m, x, u, v;
  vector<int> cats = { 0 };
  vector<int> graph[MAXN];
  bool seen[MAXN];
  bool valid_path[MAXN];
  int streak[MAXN];
  int count = 0;

  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    cin >> x;
    cats.push_back(x);
    seen[i] = false;
    valid_path[i] = true;
    streak[i] = 0;
  }

  for (int i = 0; i < n - 1; i++) {
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  stack<int> s;

  s.push(1);
  streak[1] = cats[1];

  while (!s.empty()) {
    int u = s.top();
    s.pop();
    seen[u] = true;

    bool is_leaf = true;

    for (int v : graph[u]) {
      if (!seen[v]) {
        s.push(v);
        is_leaf = false;
        if (cats[v] == 1) {
          streak[v] = streak[u] + 1;
        }
        if (streak[v] > m) {
          valid_path[v] = false;
        }
        if (!valid_path[u]) {
          valid_path[v] = false;
        }
      }
    }

    if (is_leaf && valid_path[u]) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}
