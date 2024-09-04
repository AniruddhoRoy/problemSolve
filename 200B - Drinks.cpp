#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
   float total=0,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>b;
        total=total+b;
    }
    float con=total/n;
    
    cout<<con;
    return 0;
}
