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
        map<int, int> mp;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            mx= max(mx, mp[arr[i]]);

        }
        int count = mx;
        int result = 0;

        while(count<n){
            result++;
            int x = n-count;
            if(x>count){
                result+=count;
                count += count;
            }
            else{
                result+=x;
                count += x;
            }
        }
        cout<<result<<endl;
       
    }
    return 0;
}