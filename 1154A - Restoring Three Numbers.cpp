#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,temp;
    cin>>a>>b>>c>>d;
    if(a>b && a>c && a>d)
    {
        cout<<a-d<<" "<<a-c<<" "<<a-b;
    }
    else if(b>a && b>c && b>d)
    {
        cout<<b-d<<" "<<b-c<<" "<<b-a;
    }
    else if(c>a && c>b && c>d)
    {
        cout<<c-d<<" "<<c-b<<" "<<c-a;
    }
    else if(d>a && d>b && d>c)
    {
        cout<<d-c<<" "<<d-b<<" "<<d-a;
    }
    return 0;
}
