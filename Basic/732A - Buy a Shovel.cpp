#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,i,temp;
    cin>>k>>r;
    temp=k;
    for(i=1;i<1000;i++)
    {

        if((k-r)%10==0)
        {
            cout<<i;
            break;
        }
        else if(k%10==0)
        {
            cout<<i;
            break;
        }
        else
        {
            k=k+temp;
        }
    }
    return 0;
}
