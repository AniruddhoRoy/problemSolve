#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   int n;
   cin>>n;
   while(n--)
   {
       cin>>s;
       if(((int)s[0]+(int)s[1]+(int)s[2])==((int)s[3]+(int)s[4]+(int)s[5]))
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }
}
