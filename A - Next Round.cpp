#include<iostream>
using namespace std;

int main()
{
    int n,k,i,total=0,m;
    cin>>n;
    m=n+1;
    int a[m];
    cin>>k;
    for(i=1;i<m;i++)
    {
      cin>>a[i];
    }
    for(i=1;i<m;i++)
    {
      if(a[i]>=a[k] && a[i]>0)
      {
      total=total+1;
      }
    }
    cout<<total;
    return 0;
}
