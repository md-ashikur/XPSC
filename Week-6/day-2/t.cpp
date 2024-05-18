#include <bits/stdc++.h>
using namespace std;

const int N= 2e5+3;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, sum = 0;
        cin >> n >> k;
        int a[210000];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        long long l = 1, r = 1e10 + 10;
        long long mid;
        while (l < r)
        {
            long long sum = 0;
            mid = (l + r + 1) / 2;
            for (int i = 1; i <= n; i++)
                if (a[i] < mid)
                    sum += mid - a[i];
            if (sum > k)
                r = mid - 1;
            else
                l = mid;
        }
        cout << r << endl;
    }
}
