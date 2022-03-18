
#include <bits/stdc++.h>

using namespace std;

bool sort_by_arrival(pair<int, int> a, pair<int, int> b) {
  return a.second < b.second;
}

bool sort_by_departure(pair<int, int> a, pair<int, int> b) {
  return a.first < b.first;
}

int main() {
  int n, na, nb, t, h1, h2, m1, m2;
  vector<pair<int, int>> va, vb;
  char x;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    va.clear();
    vb.clear();
    cin >> t >> na >> nb;

    for (int j = 0; j < na; j++) {
      cin >> h1 >> x >> m1;
      cin >> h2 >> x >> m2;
      va.push_back(make_pair((h1*60 + m1), (h2*60 + m2) + t));
    }
    for (int j = 0; j < nb; j++) {
      cin >> h1 >> x >> m1;
      cin >> h2 >> x >> m2;
      vb.push_back(make_pair((h1*60 + m1), (h2*60 + m2) + t));
    }

    sort(va.begin(), va.end(), sort_by_arrival);
    sort(vb.begin(), vb.end(), sort_by_departure);

    bool visited_a[100] = { false };
    bool visited_b[100] = { false };

    int a = na;
    int b = nb;

    for (int j = 0; j < nb; j++) {
      for (int k = na - 1; k >= 0; k--) {
        if (va[k].second <= vb[j].first && !visited_a[k]) {
          visited_a[k] = true;
          b--;
          break;
        }
      }
    }

    sort(va.begin(), va.end(), sort_by_departure);
    sort(vb.begin(), vb.end(), sort_by_arrival);

    for (int j = 0; j < na; j++) {
      for (int k = nb - 1; k >= 0; k--) {
        if (vb[k].second <= va[j].first && !visited_b[k]) {
          visited_b[k] = true;
          a--;
          break;
        }
      }
    }

    cout << "Case #" << i << ": " << a << " " << b << endl;
  }

  return 0;
}
