
#include <bits/stdc++.h>

using namespace std;

typedef struct { int x, y; } point;

int n;
vector<point> points;

bool check_dangerous_turn(int a1, int a2, int b1, int b2) {
  if (points[a1].y < points[a2].y && points[b1].x > points[b2].x) { // N & O
    return true;
  } else if (points[a1].y > points[a2].y && points[b1].x < points[b2].x) { // S & L
    return true;
  } else if (points[a1].x < points[a2].x && points[b1].y < points[b2].y) { // L & N
    return true;
  } else if (points[a1].x > points[a2].x && points[b1].y > points[b2].y) { // O & S
    return true;
  }
  return false;
}

int count_dangerous_turns(int a1, int a2, int b1, int b2) {
  if (b2 == n + 1) {
    return 0;
  }

  int dangerous_turns = count_dangerous_turns(a1 + 1, a2 + 1, b1 + 1, b2 + 1);

  if (check_dangerous_turn(a1, a2, b1, b2)) {
    dangerous_turns++;
  }

  return dangerous_turns;
}

int main() {
  cin >> n;

  for (int i = 0; i <= n; i++) {
    point p;
    cin >> p.x >> p.y;
    points.push_back(p);
  }

  cout << count_dangerous_turns(0, 1, 1, 2) << endl;

  return 0;
}

