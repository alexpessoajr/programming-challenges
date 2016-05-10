
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n, k;
    string first_language, last_language;
    bool several_languages;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> k;
        cin >> first_language;
        several_languages = false;
        for (int i = 1; i < k; i++) {
            cin >> last_language;
            if (last_language != first_language) {
                several_languages = true;
            }
        }
        if (several_languages) {
            cout << "ingles" << endl;
        } else {
            cout << first_language << endl;
        }
    }
    
    return 0;
}
