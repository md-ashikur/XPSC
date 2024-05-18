#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N= 210005;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        int arr[N];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        ll l = 1, r = 1e10 + 10;
        ll mid;
        while (l < r)
        {
            ll sum = 0;
            mid = (l + r + 1) / 2;
            for (int i = 1; i <= n; i++)
            {
                if (arr[i] < mid)
                 sum += mid - arr[i];
            }
           

            if (sum > x)
                r = mid - 1;
            else
                l = mid;
        }
        cout << r << endl;
    }
}
