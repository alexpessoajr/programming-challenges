
#include <bits/stdc++.h>

using namespace std;

int main() {
  int x;
  vector<int> v;
  bool solved = false;

  for (int i = 0; i < 4; i++) {
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end());

  int a, b, c, d = v[3];

  for (int i = 0; i < 3 && !solved; i++) {
    c = d - v[i];
    for (int j = 0; j < 3 && !solved; j++) {
      if (j == i) continue;
      a = v[j] - c;
      for (int k = 0; k < 3 && !solved; k++) {
        if (k == j || j == i) continue;
        b = v[k] - c;
        if (a + b + c == d) {
          solved = true;
        }
      }
    }
  }

  cout << a << " " << b << " " << c << endl;

  return 0;
}
