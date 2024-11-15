#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int dif=abs(a-b);
        if(dif%10==0)
        {
            cout<<dif/10<<endl;
        }
        else
        {
            cout<<dif/10+1<<endl;
        }
    }

}
