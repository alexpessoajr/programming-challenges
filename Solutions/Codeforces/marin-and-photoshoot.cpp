
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, n;
  string s;

  cin >> t;

  for (int tc = 1; tc <= t; tc++) {
    cin >> n >> s;
    int i = 0;
    int j = n - 1;
    while (i < n && s[i] != '0') i++;
    while (j >= 0 && s[j] != '0') j--;

    int cosplays = 0;

    if (i < j) {
      int cc = 0;
      for (int k = i + 1; k <= j; k++) {
        if (s[k] == '1') {
          cc++;
        } else {
          if (cc == 1) cosplays += 1;
          if (cc == 0) cosplays += 2; 
          cc = 0;
        }
      }
    }

    cout << cosplays << endl;
  }

  return 0;
}
