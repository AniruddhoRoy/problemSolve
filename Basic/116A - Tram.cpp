#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,remain=0,total=0,i;
    for(i=1;i<=n;i++)
    {
    
     cin>>a>>b;
     remain=remain+b-a;
     if(remain>total)
     {
     total=remain;
     }
    }
    cout<<total;
    return 0;
}
