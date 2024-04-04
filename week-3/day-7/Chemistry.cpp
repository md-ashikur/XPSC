#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{

    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>frq(26,0);
        for(char c:s)
        {
            frq[c-'a']++;
        }
        vector<int>frq2(26,0);
        for(int i=0;i<26;i++)
        {
            frq2[frq[i]]++;
        }
        sort(frq.begin(),frq.end());
        while(k!=0)
        {
            for(int i=0;i<26;i++)
            {
                if(frq[i]!=0)
                {
                    frq[i]--;
                    k--;
                }
            }
        }
        bool ans=false;
        for(int i=0;i<26;i++)
        {
            if(i%2!=0 && frq2[i]>1)
            {
                ans=true;
            }
        }
        if(ans==true) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
    return 0;
}