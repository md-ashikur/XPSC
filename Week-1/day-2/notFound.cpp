#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

char lexico(string s) {
    vector<bool> present(26, false);
    for (char c : s) {
        present[c - 'a'] = true; 
    }
    for (int i = 0; i < 26; ++i) {
        if (!present[i]) {
            return char('a' + i); 
        }
    }
    return 'N'; 
}

int main() {
    string s;
    cin >> s;

    char r = lexico(s);
    if (r == 'N') {
        cout << "None";
    } else {
        cout << r;
    }

    return 0;
}
