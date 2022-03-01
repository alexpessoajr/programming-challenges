
#include <bits/stdc++.h>

#define MAX_SIZE 1000000

using namespace std;

int main () {
  int i, j;
  int max_cycle;
  int memo[MAX_SIZE + 1] = { 0 };

  memo[1] = 1;

  for (int k = 2; k <= MAX_SIZE; k++) {
    if (memo[k] == 0) {
      long long n = k;
      int count = 0;

      while (n != 1) {
        if (n % 2 != 0) {
          n = 3 * n + 1;
        } else {
          n = n/2;
        }
        count++;
        if (n <= MAX_SIZE && memo[n] != 0) {
          memo[k] = memo[n] + count;
          break;
        }
      }
    }
  }

  while (cin >> i >> j) {
    max_cycle = memo[i];
    for (int k = min(i, j); k <= max(i, j); k++) {
      max_cycle = max(max_cycle, memo[k]);
    }
    cout << i << " " << j << " " << max_cycle << endl;
  }

  return 0;
}
