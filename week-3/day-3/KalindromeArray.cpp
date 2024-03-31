#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(int ai, vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == ai)
        {
            v.erase(v.begin() + i);
            i--;
        }
    }

    
    int i = 0, j = v.size() - 1;
    while (i < j)
    {
        if (v[i] != v[j])
        {
           return false;
           
        }
        i++;
        j--;
  
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
       {
         cin >> v[i];
       }

        long long int i = 0, j = n - 1;
        long long int ai, aj;
        bool ok = true;
        while (i < j)
        {
            if (v[i] != v[j])
            {
                ai = v[i];
                aj = v[j];
                ok = false;
                break;
            }
            i++;
            j--;
        }

        if (ok)
        {
           cout << "YES" << endl;
        }
        else
        {
            bool ans1 = isPalindrome(ai, v);
            bool ans2 = isPalindrome(aj, v);

            if (ans1 || ans2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}