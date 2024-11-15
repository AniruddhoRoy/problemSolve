#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char a,b,c;
    while(t--)
    {
        cin>>a>>b>>c;
        a = tolower(a);
        b = tolower(b);
        c = tolower(c);
        if(a=='y' && b == 'e' && c == 's')
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
