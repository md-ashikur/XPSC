#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            mp[x + 1]--;
        }
        for (auto m : mp)
        {
            ans += abs(m.second);
        }
        cout << ans / 2 << endl;
    }

    return 0;
}