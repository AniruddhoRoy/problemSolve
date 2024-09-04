#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   int x;
   cin>>x;
   int count=0;
   cin>>s;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]==s[i+1])
       {
           count++;
       }
   }
   cout<<count<<endl;
}
