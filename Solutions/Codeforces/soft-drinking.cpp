
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, l, c, d, p, nl, np;
  int toasts;
  
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  
  toasts = min(min(l*k/nl, c*d), p/np);
  
  cout << toasts / n << endl;

  return 0;
}

