#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
     char a[100];
     cin>>a;
     int d=strlen(a);
     if(d>10)
    {
      cout<<a[0]<<d-2<<a[d-1]<<endl;
    
     }
     else
     {
     cout<<a<<endl;
     }
    }
    return 0;
}
