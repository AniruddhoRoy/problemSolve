#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nn,ii;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    int A=0,B=0,C=0,D=0,E=0,F=0,G=0,H=0,I=0,J=0,K=0,L=0,M=0,N=0,O=0,P=0,Q=0,R=0,S=0,T=0,U=0,V=0,W=0,X=0,Y=0,Z=0;
    cin>>nn;
    char aa[100];
    cin>>aa;
    if(nn>=26)
    {
      for(ii=0;ii<nn;ii++)
      {
      if(aa[ii]=='a'||aa[ii]=='A')
      {
      a=1;
      }if(aa[ii]=='b'||aa[ii]=='B')
      {
      b=1;
      }if(aa[ii]=='c'||aa[ii]=='C')
      {
      c=1;
      }if(aa[ii]=='d'||aa[ii]=='D')
      {
      d=1;
      }if(aa[ii]=='e'||aa[ii]=='E')
      {
      e=1;
      }if(aa[ii]=='f'||aa[ii]=='F')
      {
      f=1;
      }if(aa[ii]=='g'||aa[ii]=='G')
      {
      g=1;
      }if(aa[ii]=='h'||aa[ii]=='H')
      {
      h=1;
      }if(aa[ii]=='i'||aa[ii]=='I')
      {
      i=1;
      }if(aa[ii]=='j'||aa[ii]=='J')
      {
      j=1;
      }if(aa[ii]=='k'||aa[ii]=='K')
      {
      k=1;
      }if(aa[ii]=='l'||aa[ii]=='L')
      {
      l=1;
      }if(aa[ii]=='m'||aa[ii]=='M')
      {
      m=1;
      }if(aa[ii]=='n'||aa[ii]=='N')
      {
      n=1;
      }if(aa[ii]=='o'||aa[ii]=='O')
      {
      o=1;
      }if(aa[ii]=='p'||aa[ii]=='P')
      {
      p=1;
      }if(aa[ii]=='q'||aa[ii]=='Q')
      {
      q=1;
      }if(aa[ii]=='r'||aa[ii]=='R')
      {
      r=1;
      }if(aa[ii]=='s'||aa[ii]=='S')
      {
      s=1;
      }if(aa[ii]=='t'||aa[ii]=='T')
      {
      t=1;
      }if(aa[ii]=='u'||aa[ii]=='U')
      {
      u=1;
      }if(aa[ii]=='v'||aa[ii]=='V')
      {
      v=1;
      }if(aa[ii]=='w'||aa[ii]=='W')
      {
      w=1;
      }if(aa[ii]=='x'||aa[ii]=='X')
      {
      x=1;
      }if(aa[ii]=='y'||aa[ii]=='Y')
      {
      y=1;
      }if(aa[ii]=='z'||aa[ii]=='Z')
      {
      z=1;
      }
      }
      
      int total=a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z;
      if(total==26)
      {
      cout<<"YES";
      }
      else
      {
      cout<<"NO";
      }
    }
    else
    {
    cout<<"NO";
    }
    
    return 0;
}
