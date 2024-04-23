#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.back() != s2.back())
        {
            if (s1.back() == 'S' || (s1.back() == 'M' && s2.back() == 'L'))
                cout << "<"<<endl;
            else
                cout << ">"<<endl;
        }
        else
        {
            if (s1.back() == 'L')
            {
                if (s1.size() < s2.size())
                    cout << "<"<<endl;
                else if (s1.size() > s2.size())
                    cout << ">"<<endl;
                else
                    cout << "="<<endl;
            }
            else
            {
                if (s1.size() < s2.size())
                    cout << ">"<<endl;
                else if (s1.size() > s2.size())
                    cout << "<"<<endl;
                else
                    cout << "="<<endl;
            }
        }
    }

    return 0;
}