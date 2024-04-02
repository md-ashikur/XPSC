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
        string s;
        cin >> s;
        string str = "meow";
        for (int i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
        for (int i = 1; i < s.size(); i++)
        {
            while (s[i] == s[i - 1])
                s.erase(i, 1);
        }
        if (s == str)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
        
    }
    return 0;
}