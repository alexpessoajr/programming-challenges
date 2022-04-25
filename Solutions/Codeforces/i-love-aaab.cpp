
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  string s;

  cin >> t;

  while (t--) {
    int ac = 0, bc = 0;
    bool ans;
    cin >> s;

    ans = s.length() > 1;

    for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'A') {
        ac++;
      } else if (s[i] == 'B') {
        if (ac < 1) {
          ans = false;
          break;
        }
        bc++;
        ac--;
      }
    }

    if (ans && s[s.length() - 1] != 'B') ans = false;

    cout << (ans ? "YES" : "NO") << endl;
  }

  return 0;
}
