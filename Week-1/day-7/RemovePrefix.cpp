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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<int> st;
        bool ans = false;
        int k=1;
        for(int i = n-1; i >= 0; i--){
            st.insert(v[i]);
           if(st.size() < k ){
            cout<< n -k+1 << endl;
            ans = true;
            break;
           }
           k++;
        }
        if(!ans) cout<< "0" << endl;
    }

    return 0;
}