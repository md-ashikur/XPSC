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

    vector<char> s(n);
    for (int i = 0; i < n; i++)
    {
      cin >> s[i];
    }
    sort(s.begin(), s.end());
    bool match = false;
    for (int i = 0; i < n; i++)
    {
      if (s.size() == 5 && s[0] == 'T' && s[1] == 'i' && s[2] == 'm' && s[3] == 'r' && s[4] == 'u')
      {
        match = true;
      }
    }

    if(match)
    cout<< "YES"<< endl;
    else 
    cout<< "NO" << endl;
  }
  return 0;
}