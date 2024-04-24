#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int sum = 0;
        int sum1 = 0;
        for (int i = 0; i < k; i++)
        {

            if (arr[i] == 1)
            {
                arr[i] = 6;
                sum += arr[i];
            }
            else if (arr[i] == 2)
            {
                arr[i] = 5;
                sum += arr[i];
            }
            else if (arr[i] == 3)
            {
                arr[i] = 4;
                sum += arr[i];
            }
            else 
            sum += arr[i];
        }

    for(int i = k; i<n; i++){
        sum1 += arr[i];
    }
        cout << sum+sum1 << endl;
    }
    return 0;
}