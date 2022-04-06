
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  bool first_letters[26] = { false };
  string word;
  vector<string> words;
  bool answer = false;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> word;
    words.push_back(word);
    first_letters[word[0] - 'A'] = true;
  }

  for (int i = 0; i < n && !answer; i++) {
    bool letters[26] = { false };

    for (char letter : words[i]) {
      letters[letter - 'A'] = true;
    }

    bool is_recursive_acronym = true;

    for (int j = 0; j < 26; j++) {
      if (!first_letters[j] && letters[j]) {
        is_recursive_acronym = false;
        break;
      }
    }

    answer = is_recursive_acronym;
  }

  cout << (answer ? "Y" : "N") << endl;

  return 0;
}
