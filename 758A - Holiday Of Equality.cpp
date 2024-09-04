#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,money=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        int temp = a[n-1]-a[i];
        money = temp+ money;

    }
cout<<money<<endl;
}
