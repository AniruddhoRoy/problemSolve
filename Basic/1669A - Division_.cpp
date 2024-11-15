#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   while(n--)
   {
       int a;
       cin>>a;
       if(a>=1900)
       {
           cout<<"Division 1"<<endl;
       }
      else if(a<=1899 && a>=1600)
       {
           cout<<"Division 2"<<endl;
       }
       else if(a<=1599 && a>=1400)
       {
           cout<<"Division 3"<<endl;
       }
       else if(a<=1399)
       {
           cout<<"Division 4"<<endl;
       }
   }
}
