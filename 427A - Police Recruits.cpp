#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a=0,b=0,count=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
      cin >> a;
      if(a==-1 && b==0)
      {
      count++;
      }
      else
      {
      b=a+b;
      if(b<0)
      {
      b=0;
      }
      }
      }
    
    cout << count;
    
    return 0;
}
