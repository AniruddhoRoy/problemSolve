#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i,j;
    char temp;
    cin>>n>>x;
    char a[n];
    cin>>a;
    for(j=0;j<x;j++)
    {
    for(i=0;i<n;i++)
    {
     if(a[i]=='B' && a[i+1]=='G')
     {
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
      i++;
     }
    }
    }
    cout<<a;
    return 0;
}
