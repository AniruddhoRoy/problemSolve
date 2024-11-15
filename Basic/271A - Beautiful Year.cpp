#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool result = true;
    int num;
    cin>>num;
    while(result)
    {
    num++;
    int d = num%10;
    int c = (num%100-d)/10;
    int b = (num%1000-num%100)/100;
    int a = (num%10000-num%1000)/1000;
    if(a!=b && a!=c && a!=d && b!=c && b!= d&& c!=d)
    {
        cout<<num;
        break;
    }
    }
}
