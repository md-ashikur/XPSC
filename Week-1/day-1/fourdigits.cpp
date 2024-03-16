#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string s = to_string(n);
    if (s.length() < 4)
    {
      s =  string(4 - s.length(), '0') + s;
      cout << s << endl;
    }
    else
    {

        cout << s << endl;
    }

    return 0;
}