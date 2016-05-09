
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n, epr, ehd, others;
    string num, sg;
    
    while (cin >> n) {
        epr = ehd = others = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> num >> sg;
            if (sg == "EPR") epr++;
            else if (sg == "EHD") ehd++;
            else others++;
        }
        
        cout << "EPR: " << epr << endl;
        cout << "EHD: " << ehd << endl;
        cout << "INTRUSOS: " << others << endl;
    }
    
    return 0;
}
