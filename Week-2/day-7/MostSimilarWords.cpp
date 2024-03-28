#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int diff = 0;
                for (int k = 0; k < m; k++)
                {
                    diff += abs(v[i][k] - v[j][k]);
                }
                ans = min(ans, diff);
            }
        }
        cout << ans << endl;
    }
    return 0;
}