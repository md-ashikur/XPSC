#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, ans;
        cin >> n >> s;
        for (int i = n - 1; i >= 0; i--)
        {
            int x = s[i] - '0';
            if (x == 0)
            {
                x = s[--i] - '0' + (s[--i] - '0') * 10;
            }

            ans += char(x + 96);
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}