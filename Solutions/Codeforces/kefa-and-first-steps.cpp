
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, last_value, current_value, current_seq = 1, max_seq = 1;

  cin >> n;
  cin >> last_value;

  for (int i = 1; i < n; i++) {
    cin >> current_value;
    if (current_value >= last_value) {
      current_seq++;
      max_seq = max(max_seq, current_seq);
    } else {
      current_seq = 1;
    }
    last_value = current_value;
  }

  cout << max_seq << endl;

  return 0;
}
