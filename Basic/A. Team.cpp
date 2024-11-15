#include<iostream>
using namespace std;
 
int main()
{
int n,i,total,s=0;
int x,y,z;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>x;
    cin>>y;
    cin>>z;
    total = x+y+z;
    
     if(total>=2)
     {
      s=s+1;
     }
       
    }
    cout<<s;
    return 0;
}
