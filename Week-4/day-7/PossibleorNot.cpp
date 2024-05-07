#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        vector<int> arr(n);
        int count = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if ((arr[i] & b) == b)
            {
                count &= arr[i];
            }
        }

        if (count == b)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}