#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, s;
    cin >> k >> s;

    int x = 0, y = 0, z = 0;
    int count = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (x + y + z == s)
            {
                z = s - x - y;
            }
            else
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}