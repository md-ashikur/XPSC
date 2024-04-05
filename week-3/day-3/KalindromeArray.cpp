#include <bits/stdc++.h>
using namespace std;


int kalin(vector<int> &v){
    int i=0, j=v.size()-1;
    int ans=1;
    while(i<j){
        if(v[i]!=v[j]){
            ans=0;
            break;
        }
        i++;
        j--;
    }
    return ans;
}

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

        int i = 0, j = n - 1;
        int ai, aj;
        int ans= -1;
        while (i < j)
        {
            if (arr[i] != arr[j])
            {
                ans = 1;
                ai = arr[i];
                aj = arr[j];
               
                break;
            }
            i++;
            j--;
        }

        if (ans==-1)
        {
           cout << "YES" << endl;
        }
        else
        {
           vector<int> v1, v2;
           for(int i = 0; i < n; i++){
            if(arr[i] == ai)
            continue;
            v1.push_back(arr[i]);
           }
           for(int i = 0; i < n; i++){
            if(arr[i] == aj)
            continue;
            v2.push_back(arr[i]);
           }

           int ans1 = kalin(v1);
           int ans2 = kalin(v2);
            if (ans1 || ans2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}