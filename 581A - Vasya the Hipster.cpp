#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,day_d=0,day_s=0;
    cin>>a>>b;
    for(int i =0;i<100;i++)
    {
        if(a>0 && b>0)
        {
            day_d++;
            a=a-1;
            b=b-1;
        }
        else
        {
            if(a>0)
            {
                day_s = a/2;
            }
            else if(b>0)
            {
                day_s = b/2;
            }
            else if(a==0 && b==0)
            {
                day_s = 0;
            }
        }
    }
    cout<<day_d<<" "<<day_s;
    return 0;
}
