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
       int arr[10001];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = 2; i <= n - 1; i++)
        {
            if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
            {
                ans = i;
            }
        }

        if (ans)
            cout << "YES" << endl
                 << ans - 1 << " " << ans << " " << ans + 1 << endl;
        else
            cout << "NO" << endl;
    }
}
