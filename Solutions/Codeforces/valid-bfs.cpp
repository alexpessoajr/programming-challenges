
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x, y;
  int deg[200010] = { 0 };
  vector<int> adj[200010];
  bool seen[200010];
  queue<int> traversal, q;

  cin >> n;

  for (int i = 0; i < n - 1; i++) {
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
    deg[x]++;
    deg[y]++;
  }

  for (int i = 1; i <= n; i++) {
    cin >> x;
    traversal.push(x);
    sort(adj[i].begin(), adj[i].end());
  }

  bool valid = traversal.front() == 1;
  q.push(traversal.front());
  traversal.pop();

  while (!q.empty() && valid) {
    int v = q.front();
    q.pop();
    seen[v] = true;

    vector<int> tmp;

    for (int i = 0; i < deg[v]; i++) {
      int next_vertex = traversal.front();
      q.push(next_vertex);
      traversal.pop();

      deg[next_vertex]--;
      tmp.push_back(next_vertex);

      if (seen[next_vertex]) {
        valid = false;
      }
    }

    sort(tmp.begin(), tmp.end());

    for (int i = 0, j = 0; i < tmp.size(); i++, j++) {
      while (seen[adj[v][j]]) j++;
      if (tmp[i] != adj[v][j]) {
        valid = false;
        break;
      }
    }
  }

  cout << (valid ? "Yes" : "No") << endl;

  return 0;
}
