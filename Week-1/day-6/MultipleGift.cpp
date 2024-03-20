#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y;
    cin >> x >> y;

    long long current = x;
    long long count = 1;
    for (long long i = x; i <= y-1; i=i*2)
    {
        if (current * 2 <= y)
        {
            current *= 2;
            count++;
        }
    }
   cout << count << endl;
    return 0;
}