#include <bits/stdc++.h>
using namespace std;

bool isCat(string s)
{
    unordered_set<char> st;

    for (char c : s)
    {
        c = tolower(c);
        st.insert(c);
    }

    string voice = "meow";
    if(st.size() != 4) return false;
    for (char c : voice)
    {
        
        if (st.find(c) == st.end())
        {
            return false;
        }
    }

    return true;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (isCat(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}