
#include <bits/stdc++.h>

using namespace std;

int main() {
  int b;

  cin >> b;

  for (int tc = 1; tc <= b; tc++) {
    pair<int, int> max_streak = make_pair(1, 1);
    pair<int, int> streak_so_far = make_pair(1, 1);
    int max_sum = 0;
    int sum_so_far = 0;
    int r, s;

    cin >> r;

    for (int k = 2; k <= r; k++) {
      cin >> s;

      if (sum_so_far + s >= 0) {
        sum_so_far = sum_so_far + s;
        streak_so_far.second = k;

        if (sum_so_far > max_sum) {
          max_sum = sum_so_far;
          max_streak = streak_so_far;
        } else if (sum_so_far == max_sum) {
          if (streak_so_far.second - streak_so_far.first > max_streak.second - max_streak.first) {
            max_streak = streak_so_far;
          }
        }
      } else {
        streak_so_far = make_pair(k, k);
        sum_so_far = 0;
      }
    }

    if (max_streak.second > max_streak.first) {
      cout << "The nicest part of route " << tc << " is between stops " << max_streak.first << " and " << max_streak.second << endl;
    } else {
      cout << "Route " << tc << " has no nice parts" << endl;
    }
  }

  return 0;
}
