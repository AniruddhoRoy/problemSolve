#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,f=0;
    string s ={"codeforces"};
    cin >> t;
    while(t--)
    {
    char a;
    cin>>a;
    for(int i=0;i<s.size();i++)
    {
    if(s[i]==a)
    {
    cout << "YES" << endl;
    f=1;
    break;
    }
    }
    if(f==0)
    {
    cout << "NO" << endl;
    }
    f=0;
    }
    
    return 0;
}
