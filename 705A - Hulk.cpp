#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    char a[]={"I hate that "};
    char b[]={"I love that "};
    char c[]={"it"};
    if(n>=3)
    {
    for(i=1;i<n;i++)
    {
        if(i%2!=0)
        {
         cout<<a;
        }
        else 
        {
         cout<<b;
        }
    }
    if(n%2==0)
    {
        cout<<"I love it";
    }
    else {
        cout<<"I hate it";
        }
    }
   else if(n==1)
    {
    cout<<"I hate it";
    }
    else 
    {
    cout<<"I hate that I love it";
    }
    return 0;
}
