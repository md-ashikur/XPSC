#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin>>n>>c;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            arr[i]+=(i+1);
        }

        sort(arr.begin(), arr.end());
        int count = 0;
        long long sum = 0;
        for(int i=0; i<n; i++){
            if(sum+arr[i]>c)
            break;
            else{
                sum+=arr[i];
                count++;
            }
        }
        cout<<count<<endl;

       
    }
    return 0;
}