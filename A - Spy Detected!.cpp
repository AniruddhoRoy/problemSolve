#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,temp;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];

       }
       for(int i=1;i<n;i++)
       {
           if(a[i-1]!=a[i])
           {
               if(i==n-1)
               {
                   cout<<i+1<<endl;
               }
               else if(a[i-1]!=a[i+1])
               {
                   cout<<i<<endl;
                   break;
               }

               else if(a[i]!=a[i+1])
               {
                   cout<<i+1<<endl;
                   break;
               }

           }

       }
   }

}
