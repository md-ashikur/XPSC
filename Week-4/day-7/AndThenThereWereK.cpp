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
        int k = 1;
        while ((k << 1) <= n)
            k <<= 1;
        cout << k - 1 << '\n';
    }
    return 0;
}