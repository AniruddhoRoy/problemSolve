#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i,n,b,total=0;
    cin>>n>>a;
    for(i=1;i<n;i++)
    {
      cin>>b;
      if(a!=b)
      {
       total++;
       a=b;
      }
    }
    cout<<total+1;
    return 0;
}
