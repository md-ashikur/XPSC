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

      
        for (int i = 0; i < n; i++)
        {
            int mx = arr[n - 1];
            if (arr[i] != k)
            {
                while (arr[i] < mx )
                {
                   
                    arr[i] += k;
                }
            }

           
        }
    sort(arr.begin(), arr.end());
       if(k==1) cout << 0 << endl;
       else {
        cout<<arr[n-1] - arr[0] << endl;
       }

        
    }
    return 0;
}