#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,time1=4*60,i,time=0,count=0;
    cin>>a>>b;
    for(i=1;i<=a;i++)
    {
     time = time + 5*i;
     if(time+b>time1)
     {
     break;
     }
     count++;
    }
    cout << count << endl;
    return 0;
}
