#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 200005;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[N], b[N];
        ll sum[N];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = max(b[i - 1], a[i]);
            sum[i] = sum[i - 1] + a[i];
        }
        while (q--)
        {
            int k;
            cin >> k;
            k = upper_bound(b, b + n + 1, k) - b - 1;
            cout << sum[k] << " ";
        }
        cout << endl;
    }
    return 0;
}