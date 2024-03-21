#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, bool> mp;
   

    for (int i = 1; i <=n; i++) {
        int num;
        cin>>num;
        mp[num] = true;
    }

   
    int missing = 0;
    for (int i = 1; i <= n; i++) {
        
        if (!mp[i]) {
            missing = i;
            break;
        }
    }

    cout << missing << endl;

    return 0;
}
