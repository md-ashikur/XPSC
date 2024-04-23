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
        map<int, int> mp1, mp2;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (mp1[x] == 0) {
                mp1[x] = i;
            }
            mp2[x] = i;
        }
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            if (mp1[x] != 0 && mp1[y] != 0 && mp2[y] >= mp1[x])
                cout << "YES"<<endl;
            else
                cout << "NO"<<endl;
        }
    }

    return 0;
}