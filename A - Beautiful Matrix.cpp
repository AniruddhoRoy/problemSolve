#include<iostream>
using namespace std;

int main()
{
    int a[6][6];
    int i,j,k,l;
    int step;
    for(i=1;i<6;i++)
    {
    for(j=1;j<6;j++)
    {
     cin>>a[i][j];
    }
    }
    for(i=1;i<6;i++)
    {
    for(j=1;j<6;j++)
    {
     if(a[i][j]>0)
     {
     k=i;
     l=j;
     }
    }
    }
    step=abs((3-k))+abs((3-l));
    cout<<step;
    return 0;
}
