#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, pos;
        cin >> n;
        int arr[n][n - 1];
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
                cin >> arr[i][j];
                if(j==n-2){
                    if(mp[arr[i][j]] >=1){
                        pos=arr[i][j];
                    }
                mp[arr[i][j]]++;
                }

            }
        }
       
        for (int i = 0; i < n; i++)
        {
            if (arr[i][n-2] != pos)
            {
                for(int j = 0; j < n-1; j++){
                    cout<<arr[i][j]<<" ";
                }
                break;
            }
                
        }
        cout<<pos<<endl;
       
    }

    return 0;
}