#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                int now = -arr[i][j];
                for (int k = 0; k < n; k++)
                {
                    int d = abs(i - k);
                    if (j >= d)
                        now += arr[k][j - d];
                    if (j + d < m)
                        now += arr[k][j + d];
                }
                ans = max(ans, now);
            }
        cout << ans << endl;
    }

    return 0;
}