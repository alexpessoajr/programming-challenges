
#include <bits/stdc++.h>

#define MAXL 110

using namespace std;

int main() {
  int n, m;
  int lines[MAXL];

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> lines[i];
  }

  for (int i = 0; i < m; i++) {
    int min_idx = 0;

    for (int j = 1; j < n; j++) {
      if (lines[j] < lines[min_idx]) {
        min_idx = j;
      }
    }

    cout << lines[min_idx]++ << endl;
  }

  return 0;
}
