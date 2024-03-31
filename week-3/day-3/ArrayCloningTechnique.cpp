#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        for (int b : a)
        {
            mp[b]++;
        }
        int mx = INT_MIN;
        for (auto m : mp)
        {
            mx = max(mx, m.second);
        }

        int baki = n - mx;
        int clone = 0;
        int move = 0;
        if (baki == 0)
            cout << 0 << '\n';
        else
        {
            while (baki != 0)
            {
                clone++;
                baki -= mx;
                move += mx;
            }
            int ans = clone + move;
            cout << ans << '\n';
        }
    }
    return 0;
}