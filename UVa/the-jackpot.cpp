
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;

  while (cin >> n && n) {
    int max_sum = 0;
    int sum_so_far = 0;
    int x;

    for (int i = 0; i < n; i++) {
      cin >> x;
      sum_so_far = max(0, sum_so_far + x);
      max_sum = max(max_sum, sum_so_far);
    }

    if (max_sum > 0) {
      cout << "The maximum winning streak is " << max_sum << "." << endl;
    } else {
      cout << "Losing streak." << endl;
    }
  }

  return 0;
}
