#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    long long result = b / c;
    result *= c;
    if (result >= a && result <= b)
        cout << result << endl;
    else
        cout << "-1" << endl;
    return 0;
}