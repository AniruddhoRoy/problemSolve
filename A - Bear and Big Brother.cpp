#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,y=0;
    cin>>a>>b;
    for(i=0; i<10; i++)
    {
        a=a*3;
        b=b*2;
        y++;
        if(a>b)
        {
            break;
        }

    }
    cout<<y;
    return 0;
}
