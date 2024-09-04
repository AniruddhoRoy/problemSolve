#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>> k>> l>> c>> d>> p>> nl>> np;
    int softdrink = (k*l)/nl;
    int lime = c*d;
    int salt = p/np;
    if(softdrink<=lime && softdrink<=salt)
    {
        cout<<softdrink/n;
    }
    else if(lime<=softdrink && lime<=salt)
    {
        cout<<lime/n;
    }
    else if(salt<=lime && salt<=softdrink)
    {
        cout<<salt/n;
    }
    return 0;
}
