#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        priority_queue<ll> pq;
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > 0)
            {
                pq.push(v[i]);
            }
            else
            {
                if (pq.empty())
                {
                    continue;
                }

                total += pq.top();
                pq.pop();
            }
        }
        cout << total << endl;
    }
    return 0;
}