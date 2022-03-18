
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool endsWith(string s, string suffix) {
    int slength = s.length();
    int suffixlength = suffix.length();
    
    for (int i = 0; i < suffixlength; i++) {
        if (s[slength - i - 1] != suffix[suffixlength - i - 1]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int n, winners = 0;
    string panel = "FACE", word, rword;
    char letter;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {

        word = "";
        
        for (int j = 0; j < 4; j++) {
            cin >> letter;
            word += letter;
        }
        
        rword = word;
        reverse(rword.begin(), rword.end());

        if (endsWith(panel, rword)) {
            winners++;
            panel = panel.substr(0, panel.length() - 4);
            
            if (panel.empty()) {
                panel = "FACE";
            }
            
        } else {
            panel += word;
        }
    }
    
    cout << winners << endl;
    
    return 0;
}
