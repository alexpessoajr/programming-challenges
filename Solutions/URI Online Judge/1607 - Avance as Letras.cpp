
#include <iostream>
#include <string>

using namespace std;

int dist(char a, char b) {
    int d = 0;
    
    if (a > b) {
        d = 26 - (a - b);
    } else if (a < b) {
        d = b - a;
    }
    
    return d;
}

int main(void) {
    int t, sum;
    string a, b;
    
    cin >> t;
    
    for (int tc = 1; tc <= t; tc++) {
        cin >> a >> b;
        sum = 0;
        for (int i = 0; i < a.length(); i++) {
            sum += dist(a[i], b[i]);
        }
        cout << sum << endl;
    }
    
    return 0;
}
