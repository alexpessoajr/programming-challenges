
#include <iostream>

using namespace std;

int v, m;
int c[1010];
bool memo[1010][100010] = {{ false }};
bool solved[1010][100010] = {{ false }};

bool can_do_it (int value, int p) {
  if (solved[p][value]) {
    return memo[p][value];
  }
  if (p >= m && value != 0) {
    return false;
  }
  if (value == 0) {
    return true;
  }
  if (value < 0) {
    return false;
  }
  solved[p][value] = true;
  return memo[p][value] = can_do_it(value - c[p], p + 1) || can_do_it(value, p + 1);
}

int main (void) {

  cin >> v >> m;

  for (int i = 0; i < m; i++) {
    cin >> c[i];
  }

  cout << (can_do_it(v, 0) ? "S": "N") << endl;

  return 0;
}

