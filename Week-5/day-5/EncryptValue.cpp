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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        long long int sum = 0;
        long long int gun = 0;
        for (int i = 0; i < n; i++)
        {
            gun += arr[i];
            arr[i] *= arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            
            sum += arr[i];
        }

        // int res = max(sum, gun);
        cout << sum << endl;
    }
    return 0;
}