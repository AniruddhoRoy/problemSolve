#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,a,b,count=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2-1<<endl;
        }
        else
        {
            cout<<n/2<<endl;
        }
    }
    return 0;
}
