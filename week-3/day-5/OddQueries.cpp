#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        vector<ll> pref(n);
        pref[0] = ar[0];
        for (int i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1] + ar[i];
        }

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            r--, l--;
            ll totalSum = pref[n - 1];
            ll sum;
            if (l == 0)
                sum = pref[r];
            else
                sum = pref[r] - pref[l - 1];
                
            ll restSum = totalSum - sum;
            ll ans = k * (r - l + 1) - restSum;

            if (ans % 2 != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
