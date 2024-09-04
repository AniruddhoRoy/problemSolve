#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,count=0;
    string a;
    string b={"Tetrahedron"};
    string c={"Cube"};
    string d={"Octahedron"};
    string e={"Dodecahedron"};
    string f={"Icosahedron"};
    
    cin>>i;
    while(i--)
    {
    cin>>a;
    if(a==b)
    {
    count=count+4;
    }
    if(a==c)
    {
    count=count+6;
    }
    if(a==d)
    {
    count=count+8;
    }
    if(a==e)
    {
    count=count+12;
    }
    if(a==f)
    {
    count=count+20;
    }
    }
    cout << count<< endl;
    return 0;
}
