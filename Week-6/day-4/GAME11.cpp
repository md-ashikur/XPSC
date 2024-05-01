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
        vector<int> bat(n);
        vector<int> ball(m);
        for (int i = 0; i < n; i++)
        {
            cin >> bat[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> ball[i];
        }

        sort(bat.begin(), bat.end());
        sort(ball.begin(), ball.end());

        long long int mx = 0;
        int batCount = n - 1;
        int ballCount = m - 1;
        for (int i = 0; i < 4; i++)
        {
            mx += bat[batCount--];
        }
        for (int i = 0; i < 4; i++)
        {
            mx += ball[ballCount--];
        }

        for (int i = 0; i < 3; i++)
        {
            if (batCount >= 0 && ballCount >= 0)
            {
                if (bat[batCount] >= ball[ballCount])
                {
                    mx += bat[batCount--];
                }
                else
                {
                    mx += ball[ballCount--];
                }
            }
            else if (batCount >= 0)
            {
                mx += bat[batCount--];
            }
            else
            {
                mx += ball[ballCount--];
            }
        }

        if (n < 4 || m < 4 || (m + n) < 11)
        {
            cout << -1 << endl;
        }
        else{

        cout << mx << endl;
        }
    }

    return 0;
}