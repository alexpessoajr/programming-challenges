
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a;
  set<int> p;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    p.insert(a);
  }

  cout << p.size() << endl;

  return 0;
}
