#include <bits/stdc++.h>
using namespace std;

int main()
{

   int a, b;
   cin>>a>>b;
   int result = max({a+a-1, b+b-1, a+b});
   cout<<result<<endl;

    return 0;
}