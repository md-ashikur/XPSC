#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != m)
        {
            v[i - count] = v[i];
        }
        else
        {
            count++;
        }
    }

    for (int i = 0; i < n - count; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}