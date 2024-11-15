#include<iostream>
using namespace std;

int main()
{
    int x=0,n,i;
    
    cin>>n;
    for(i=0;i<n;i++)
    {
    char a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a=='+')
    { 
      ++x;
    }
    else if(a=='-')
    {
    --x;
    }
    else if(a=='X')
    {
    if(b=='+')
    {
    x++;
    }
    else if(b=='-')
    {
    x--;
    }
    }
    }
    cout<<x;
    return 0;
}
