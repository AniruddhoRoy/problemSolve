#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,count = 0;
    cin>>n;
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(a[i]==b[j])
           {
                count++;
           }
       }
   }
        cout<<count;
return 0;
}
