
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, n;

  cin >> t;

  while (t--) {
    cin >> n;
    int a = n/3;
    int b = n/3;

    if (abs((a + 2*b) - n) == 2) {
      b++;
    } else if (abs((a + 2*b) - n) == 1) {
      a++;
    }
    cout << a << " " << b << endl;
  }

  return 0;
}
