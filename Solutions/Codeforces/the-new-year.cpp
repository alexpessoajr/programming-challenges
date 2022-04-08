
#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()

using namespace std;

int main() {
  int a, b, c;

  cin >> a >> b >> c;

  vector<int> v = {
    abs(a - b) + abs(a - c),
    abs(b - a) + abs(b - c),
    abs(c - a) + abs(c - b)
  };

  cout << *min_element(all(v)) << endl;

  return 0;
}
