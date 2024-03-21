#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        
        string ds = s + s; 
       
        vector<long long> v;
        for (long long i = 0; i < n; i++) {
            if (s[i] == c) {
                v.push_back(i);
            }
        }

       
        long long maxWait = 0;
        for (long long index : v) {
            long long wait = 0;
            while (ds[index] != 'g') {
                wait++;
                index++;
            }
            maxWait = max(maxWait, wait);
        }

        cout << maxWait << endl;
    }

    return 0;
}
