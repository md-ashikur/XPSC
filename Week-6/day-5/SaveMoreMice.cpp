#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[400005];

        for (int i = 1; i <= k; i++)
        {
            cin >> arr[i];
        }

        sort(arr + 1, arr + k + 1);
        int s = n, j = k;
        while (s > 0)
        {
            s -= (n - arr[j]);
            j--;
        }
        int ans = k - j - 1;
        cout << ans << endl;
    }

    return 0;
}