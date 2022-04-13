
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  string p;
  ll size = 0;
  map<char, int> commands = {
    { '>', 0b1000 },
    { '<', 0b1001 },
    { '+', 0b1010 },
    { '-', 0b1011 },
    { '.', 0b1100 },
    { ',', 0b1101 },
    { '[', 0b1110 },
    { ']', 0b1111 },
  };

  cin >> p;

  size = commands[p[0]];

  for (int i = 1; i < p.length(); i++) {
    size <<= 4;
    size += commands[p[i]];
    size %= (ll)1e6 + 3;
  }

  cout << size << endl;

  return 0;
}
