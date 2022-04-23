
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;

  cin >> t;

  while (t--) {
    int n, x;
    bool is_all_even[2] = { true, true };
    bool is_all_odd[2] = { true, true };

    cin >> n;

    for (int i = 0; i < n; i++) {
      cin >> x;
      is_all_even[i % 2] &= (x % 2 == 0);
      is_all_odd[i % 2] &= (x % 2 != 0);
    }

    if ((is_all_even[0] || is_all_odd[0]) && (is_all_even[1] || is_all_odd[1])) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
