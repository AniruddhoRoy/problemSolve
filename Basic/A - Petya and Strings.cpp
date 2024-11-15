#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100],b[100];
    int i=0;
    cin>>a;
    cin>>b;
    for(i=0;i<100;i++) 
    {
     a[i]=tolower(a[i]);
    }
    for(i=0;i<100;i++) 
    {
     b[i]=tolower(b[i]);
    }
    int d = strcmp(a,b);
    if(d==0)
    {
    cout<<"0";
    }
   else{
   for(i=0;i<100;i++) 
    {
    if(a[i]=='\0')
    {
    break;
    }
    if(a[i]>b[i]) 
    {
    cout<<"1";
    break;
    }
    
   else if(a[i]<b[i]) 
    {
    cout<<"-1";
    break;
    }
    }
   } 
    
    
    
    return 0;
}
