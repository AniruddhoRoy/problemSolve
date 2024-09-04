#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>a;
      if(a==1)
      {
      c++;
      }
    }
    if(c>0)
    {
    cout<<"HARD";
    }
    else
    {
    cout<<"EASY";
    }
    return 0;
}
