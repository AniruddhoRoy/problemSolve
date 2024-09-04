#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[101],b[101];
    char c[101];
    cin>>a>>b;
    long long i,d=strlen(a);
    
    for(i=0;i<d;i++)
    {
    if(a[i]==b[i])
    {
      c[i]='0';
    }
    else
    {
        c[i]='1';
    }
    }
    c[d]='\0';
    cout<<c;
    return 0;
}
