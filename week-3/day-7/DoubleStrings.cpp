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
        string arr[n];
        bool ans[n];
        set<string> st;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            st.insert(arr[i]);
            ans[i] = false;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < arr[i].size(); j++)
            {
                string s1 = "", s2 = "";
                for(int k = 0; k < j; k++){
                     s1+=arr[i][k];
                }
                for(int k = j; k < arr[i].size(); k++){
                     s2+=arr[i][k];
                }
                if(st.find(s1) != st.end() && st.find(s2) != st.end()){
                    ans[i] = true;
                    break;
                }
            }
        }

        for(int i = 0; i <n; i++){
            cout<<ans[i];
        }
        cout<<endl;
    }

    return 0;
}