
#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

int main() {
  int n, x;
  vector<int> v[3];
  
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> x;
    v[x-1].push_back(i);
  }

  int w = INT_MAX;

  for (int i = 0; i < 3; i++) {
    w = min(w, (int) v[i].size());
  }

  cout << w << endl;

  for (int i = 0; i < w; i++) {
    cout << v[0][i] << " " << v[1][i] << " " << v[2][i] << endl;
  }

  return 0;
}
