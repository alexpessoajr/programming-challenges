
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  vector<pair<int, int>> uniforms;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int home, guest;
    cin >> home >> guest;
    uniforms.push_back(make_pair(home, guest));
  }

  int count = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j) {
        if (uniforms[i].first == uniforms[j].second) {
          count++;
        }
      }
    }
  }

  cout << count << endl;

  return 0;
}
