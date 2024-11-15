#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=m;j++)
       {
       if(i==1 || i==n)
       {
       cout<<"#";
       }
       else if(i%2==0)
       {
       if(i%4==0)
       {
       if(j==1)
       {
       cout<<"#";
       }
       else
       {
       cout<<".";
       }
       }
       else
       {
       if(j==m)
       {
        cout<<"#";
        }
        else
        {
        cout<<".";
        }
       }
       }
       else
       {
       cout<<"#";
       }
       }
       cout << "" << endl;
    }
    return 0;
}
