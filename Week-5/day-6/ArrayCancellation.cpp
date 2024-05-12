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
        long long int num = 0;
        vector<long long int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            num += arr[i];
            num = max(num, 0ll);
        }
        cout << num << endl;
    }
    return 0;
}