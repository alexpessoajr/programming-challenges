
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x, y, day;

  cin >> n >> x >> y;

  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++) {
    int min_x = INT_MAX;
    int min_y = INT_MAX;

    for (int j = 1; j <= x; j++) {
      if (i - j >= 0) {
        min_x = min(min_x, v[i - j]);
      }
    }

    for (int j = 1; j <= y; j++) {
      if (i + j < n) {
        min_y = min(min_y, v[i + j]);
      }
    }

    if (v[i] < min_x && v[i] < min_y) {
      day = i + 1;
      break;
    }
  }

  cout << day << endl;

  return 0;
}
