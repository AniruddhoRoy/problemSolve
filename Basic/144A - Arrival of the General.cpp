#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp,min=100,max=0,i,maxindex=0,minindex=0;
    cin>>n;
    int a[n];
    
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    if(a[i]>max)
    {
    max=a[i];
    maxindex = i;
    }
    if(a[i]<=min)
    {
    min=a[i];
    minindex =i;
    }
    }
    
    if(maxindex>minindex)
    {
      minindex++;
      // When indexs of minimum number and maximum number
      //swipe each other and maximum number index is greater than minimum number index
      //there make a difference of 1 index;
    }
    int moves=maxindex+ (n-minindex-1);
   //cout<<minindex<<" "<<maxindex<<endl;
   cout<<moves;
    return 0;
}
