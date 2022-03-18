
#include <iostream>
#include <string>

using namespace std;

int one_digit(string n) {
    int sum = 0;
    
    for (int i = 0; i < n.length(); i++) {
        sum += n[i] - '0';
        if (sum >= 10) {
            sum = sum % 10 + sum/10;
        }
    }
    
    return sum;
}

int main(void) {
    string a, b;
    while (cin >> a >> b && !(a == "0" && b == "0")) {
        int da = one_digit(a);
        int db = one_digit(b);
        if (da > db) cout << "1";
        else if (da < db) cout << "2";
        else cout << "0";
        cout << endl;
    }
    return 0;
}
