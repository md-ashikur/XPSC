#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int k, n, ans=0;
        cin >> k >> n;
        vector<int> arr(k+1), pref(k+1, 0);

        for (int i = 1; i <= k; i++)
        {

            cin >> arr[i];
            if (arr[i] % 2)
            {
                pref[i] = 1;
            }
            pref[i] += pref[i - 1];
        }

        for (int i = 1; i + n - 1 <= k; i++)
        {
            if (pref[i + n - 1] - pref[i - 1] > 0)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}