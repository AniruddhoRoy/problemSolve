#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w,i,total=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
     total=total+k*i;
    }
    int money=total-n;
    if(total>n)
    {
    cout<<money;
    }
    else
    {
    cout<<"0";
    }
    return 0;
}
