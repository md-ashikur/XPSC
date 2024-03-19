#include <bits/stdc++.h>
using namespace std;

char findLetter(string s) {
    vector<bool> present(26, false);
    for (char c : s) {
        present[c - 'a'] = true; 
    }
    for (int i = 0; i < 26; i++) {
        if (!present[i]) {
            return char('a' + i); 
        }
    }
    return '0'; 
}



int main()
{string s;
    cin >> s;

    char result = findLetter(s);
    if (result == '0') {
        cout << "None";
    } else {
        cout << result;
    }
    return 0;
}