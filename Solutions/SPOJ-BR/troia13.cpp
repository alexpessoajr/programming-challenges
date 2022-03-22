
#include <bits/stdc++.h>

using namespace std;

int id[50010];
int sz[50010];

int root(int q) {
  while (id[q] != q) {
    id[q] = id[id[q]];
    q = id[q];
  }
  return q;
}

void connect(int p, int q) {
  int pid = root(p);
  int qid = root(q);

  if (pid != qid) {
    if (sz[pid] < sz[qid]) {
      id[pid] = qid;
      sz[qid] += sz[pid];
    } else {
      id[qid] = pid;
      sz[pid] += sz[qid];
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m, p, q;
  set<int> s;

  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    id[i] = i;
    sz[i] = 1;
  }

  for (int i = 0; i < m; i++) {
    cin >> p >> q;
    connect(p, q);
  }

  for (int i = 1; i <= n; i++) {
    s.insert(root(i));
  }

  cout << s.size() << endl;

  return 0;
}
