
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  double s[1000];

  while (cin >> n && n > 0) {
    double sum = 0;

    for (int i = 0; i < n; i++) {
      cin >> s[i];
      sum += s[i];
    }

    double avg = sum / n;
    double above_avg = 0;
    double below_avg = 0;

    for (int i = 0; i < n; i++) {
      if (s[i] > avg) {
        above_avg += round((s[i] - avg) * 100) / 100.0;
      } else {
        below_avg += round((avg - s[i]) * 100) / 100.0;
      }
    }

    cout << "$" << fixed << setprecision(2) << min(below_avg, above_avg) << endl;
  }

  return 0;
}
