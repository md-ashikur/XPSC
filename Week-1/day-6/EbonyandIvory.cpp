#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long a,b,c;
   cin>>a>>b>>c;
   bool match = false;
   for(int i=0; i<=c; i++){
    for(int j=0; j<=c; j++){
        if(i*a == c || j*b==c || i*a+j*b==c){
            match=true;
           
        }
       
    }
   }
   if(match){
    cout<<"Yes"<<endl;
   }
   else{
    cout<<"No"<<endl;
   }
    return 0;
}