#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100];
    int i,j,temp;
    cin>>a;
    int d = strlen(a);
    for(i=0;i<d;i++)
    {
    
        for(j=i+1;j<d;j++)
        {
           if(a[i]=='+'|| a[j]=='+')
            {
             continue;
            }
           else  if(a[i]>a[j])
            {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
            
        }
    }
    cout<<a;
    return 0;
}
