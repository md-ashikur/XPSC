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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<pair<int, string>> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i].first >> v2[i].second;
        }

        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v2[i].first; j++)
            {
                if (v2[i].second[j] == 'D')
                    v[i] = (v[i] + 1) % 10;
                else
                    v[i] = (v[i] + 9) % 10;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
