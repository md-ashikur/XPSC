#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] * x > y)
            {
                arr[i] = y;
                sum += arr[i];
            }
            else
            {
                sum += arr[i] * x;
            }

        }
        cout<<sum << endl;
    }
    return 0;
}