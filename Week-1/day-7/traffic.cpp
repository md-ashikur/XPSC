#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        char ch;
        cin >> ch;
        string s;
        cin >> s;

        s += s;

        vector<long long> v;
        for (long long i = 0; i < n; i++)
        {
            if (s[i] == ch)
            {
                v.push_back(i);
            }
        }

        long long ans = LLONG_MIN;
        long long dis = 0;
        for (long long i = 2 * n - 2; i >= 0; i--)
        {
            if (s[i] == 'g')
                dis = 0;
            if (s[i] == ch)
                ans = max(ans, dis);
            dis++;
        }

        cout << ans << endl;
    }

    return 0;
}
