#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    vector<int> v3(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(),
          v3.begin());

    for (auto v : v3)
    {
        cout << v << " ";
    }
    

    return 0;
}