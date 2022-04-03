
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, i = 1, sum = 0;

  cin >> n;
 
  while (true) {
    for (int j = 1; j <= i; j++) {
      sum += j;
    }
    if (sum == n) break;
    if (sum > n) {
      i--;
      break;
    }
    i++;
  }

  cout << i << endl;

  return 0;
}
