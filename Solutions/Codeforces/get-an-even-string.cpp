
#include <bits/stdc++.h>

using namespace std;

int memo[200010];

string s;

int solve(int p) {
  if (p >= s.length()) {
    return 0;
  }
  if (memo[p] != -1) {
    return memo[p];
  }
  if (p < s.length() - 1 && s[p] == s[p + 1]) {
    return memo[p] = solve(p + 2);
  }

  int j = p + 1;

  while (j < s.length() && s[j] != s[p]) j++;

  if (j == s.length()) {
    return memo[p] = min(1 + solve(p + 1), j - p);
  } else {
    return memo[p] = min(1 + solve(p + 1), j - p - 1 + solve(j + 1));
  }
}

int main() {
  int n;

  cin >> n;

  while (n--) {
    cin >> s;
    memset(memo, -1, s.length() * sizeof(int));
    cout << solve(0) << endl;
  }

  return 0;
}
