#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<ll> v(n);

        ll count = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] <= q)
                ans++;
            else
                ans = 0;
              
            if (ans >= k)
                count += (ans - k + 1);
        }
        cout<<count<<endl;
    }

    return 0;
}