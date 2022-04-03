
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, c, m, y, k;
  int min_c, min_m, min_y, min_k;

  cin >> t;

  for (int tc = 1; tc <= t; tc++) {
    cin >> min_c >> min_m >> min_y >> min_k;

    for (int i = 1; i < 3; i++) {
      cin >> c >> m >> y >> k;
      min_c = min(min_c, c);
      min_m = min(min_m, m);
      min_y = min(min_y, y);
      min_k = min(min_k, k);
    }

    cout << "Case #" << tc << ": ";

    if (min_c + min_m + min_y + min_k < 1e6) {
      cout << "IMPOSSIBLE";
    } else {
      int maxv = 1e6;
      cout << min_c << " ";
      maxv -= min_c;
      cout << min(max(maxv, 0), min_m) << " ";
      maxv -= min_m;
      cout << min(max(maxv, 0), min_y) << " ";
      maxv -= min_y;
      cout << min(max(maxv, 0), min_k);
      maxv -= min_k;
    }

    cout << endl;
  }

  return 0;
}
