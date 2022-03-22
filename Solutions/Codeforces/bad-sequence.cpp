
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  char x;
  stack<char> seq;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x;

    if (!seq.empty()) {
      if (seq.top() == '(' && x == ')') {
        seq.pop();
        continue;
      }
    }
    seq.push(x);
  }

  if (seq.size() == 0) {
    cout << "Yes" << endl;
    return 0;
  }

  if (seq.size() == 2) {
    char a = seq.top();
    seq.pop();
    char b = seq.top();

    if (a != b) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}
