#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<int> palin;
ll binarypow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}



void isPlin(){
    ll x = binarypow(2, 15) -1;
    for(int i=0;i<x;i++){
        string s=to_string(i);
        string str=s;
        reverse(s.begin(),s.end());
        if(str==s){
            palin.push_back(i);
        }
    }
}



int main()
{

    int t;
    cin >> t;
    isPlin();
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
       
        ll ans = 0;
        for (auto num : arr)
        {
            ++mp[num];
            for (auto p : palin)
            {

                ans += mp[num ^ p];
            }
        }

        cout << ans << endl;
    }
    return 0;
}