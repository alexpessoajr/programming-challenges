
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, c, mc = 0, cc = 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> m >> c;
    if (m > c) {
      mc++;
    } else if (m < c) {
      cc++;
    }
  }

  if (mc > cc) {
    cout << "Mishka" << endl;
  } else if (mc < cc) {
    cout << "Chris" << endl;
  } else {
    cout << "Friendship is magic!^^" << endl;
  }

  return 0;
}
