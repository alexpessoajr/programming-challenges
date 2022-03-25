
#include <bits/stdc++.h>

using namespace std;

int id[110];
int sz[110];

int root(int q) {
  while (id[q] != q) {
    id[q] = id[id[q]];
    q = id[q];
  }
  return q;
}

bool is_connected(int p, int q) {
  return root(p) == root(q);
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

typedef struct { int u, v, weight; } Edge;

bool cmp(Edge a, Edge b) {
  return a.weight < b.weight;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m, x, y, z, caseNumber = 1;
  vector<Edge> edges, mst;

  while (cin >> n >> m, n) {
    edges.clear();
    mst.clear();

    for (int i = 1; i <= n; i++) {
      id[i] = i;
      sz[i] = 1;
    }

    for (int i = 0; i < m; i++) {
      cin >> x >> y >> z;
      edges.push_back({ x, y, z });
    }

    sort(edges.begin(), edges.end(), cmp);

    for (auto edge: edges) {
      if (!is_connected(edge.u, edge.v)) {
        connect(edge.u, edge.v);
        mst.push_back(edge);
      }
    }

    cout << "Teste " << caseNumber++ << endl;

    for (auto edge : mst) {
      cout << min(edge.u, edge.v) << " " << max(edge.u, edge.v) << endl;
    }

    cout << endl;
  }

  return 0;
}
