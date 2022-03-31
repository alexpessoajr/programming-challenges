
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

  int d = v[3];
  int a = d - v[0];
  int b = d - v[1];
  int c = d - v[2];

  cout << a << " " << b << " " << c << endl;

  return 0;
}
