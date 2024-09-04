#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q,room=0,temp,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>p>>q;
    temp=q-p;
    if(temp>=2)
    {
    room++;
    }
    }
    cout<<room;
    return 0;
}
