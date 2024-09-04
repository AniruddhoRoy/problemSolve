#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int a[4];
    while(n--)
    {
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    for(int i=1;i<4;i++)
    {
     if(a[0]<a[i])
     {
     count++;
     }
    }
   cout << count<<endl;
   count=0;
   }
   
    return 0;
}
