#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100];
    int i,upper=0,lower=0;
    cin>>a;
    int d=strlen(a);
    for(i=0; i<d; i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            lower++;
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            upper++;
        }
    }
  //  cout<<upper<<" "<<lower;
    if(upper>lower)
    {
        for(i=0; i<d; i++)
        {
            a[i]=toupper(a[i]);
        }
    }
    else if(upper<lower)
    {
        for(i=0; i<d; i++)
        {
            a[i]=tolower(a[i]);
        }
    }
    else if(upper=lower)
    {
        for(i=0; i<d; i++)
        {
            a[i]=tolower(a[i]);
        }

    }

    cout<<a;
    return 0;
}
