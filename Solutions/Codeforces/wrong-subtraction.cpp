
#include <bits/stdc++.h>

using namespace std;

int main() {
  long n, k;
  
  cin >> n >> k;
  
  while (k-- > 0) {
    if (n % 10 != 0) {
      n--;
    } else {
      n = n / 10;
    }
  }
  
  cout << n << endl;

  return 0;
}

