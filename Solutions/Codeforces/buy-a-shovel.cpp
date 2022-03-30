
#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int k, r, i = 1;
  
  cin >> k >> r;

  while ((k * i) % 10 != 0 && (k * i) % 10 != r) i++;

  cout << i << endl;

  return 0;
}
