#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,count=0;
    string a;
    getline(cin,a);
    for(i='a';i<='z';i++)
    {
     // cout<<(char)i<<endl;
     for(j=0;j<a.size();j++)
     {
       if((char)i==a[j])
       {
       count++;
       break;
       }
     }
    }
    cout << count << endl;
    return 0;
}
