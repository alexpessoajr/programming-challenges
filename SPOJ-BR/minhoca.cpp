
#include <bits/stdc++.h>

using namespace std;

int main() {
  int c[110][110];
  int n, m;

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> c[i][j];
    }
  }

  int maxv = 0;
  int sum;

  for (int i = 0; i < n; i++) {
    sum = 0;
    for (int j = 0; j < m; j++) {
      sum += c[i][j];
    }
    maxv = max(maxv, sum);
  }

  for (int i = 0; i < m; i++) {
    sum = 0;
    for (int j = 0; j < n; j++) {
      sum += c[j][i];
    }
    maxv = max(maxv, sum);
  }

  cout << maxv << endl;

  return 0;
}
