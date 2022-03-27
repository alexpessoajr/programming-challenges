
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, cost = 0;
  string a, b;

  cin >> n >> a >> b;

  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      if (i < n - 1 && (a[i+1] == b[i] && b[i+1] == a[i])) {
        i++;
      }
      cost++;
    }
  }

  cout << cost << endl;

  return 0;
}
