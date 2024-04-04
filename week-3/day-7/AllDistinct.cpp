#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }

        int r = mp.size();
        if ((n - r) % 2)
            r--;

        cout << r << endl;
    }
    return 0;
}