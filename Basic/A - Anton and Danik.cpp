#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a=0,b=0;
    cin>>n;
    char s[n];
    cin>>s;
    for(i=0;i<n;i++)
    {
     if(s[i]=='A')
     {
     a++;
     }
     else
     {
     b++;
     }
    }
    if(a>b)
    {
    cout<<"Anton";
    }
    else if(a==b)
    {
    cout<<"Friendship";
    }
    else 
    {
    cout<<"Danik";
    }
    return 0;
}
