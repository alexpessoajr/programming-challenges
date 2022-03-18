
#include <bits/stdc++.h>

using namespace std;

int main() {
  double x, maxv = DBL_MIN, minv = DBL_MAX;
  double sum = .0;

  for (int i = 0; i < 5; i++) {
    cin >> x;
    maxv = max(maxv, x);
    minv = min(minv, x);
    sum += x;
  }

  cout << fixed << setprecision(1) << (sum - minv - maxv) << endl;

  return 0;
}
