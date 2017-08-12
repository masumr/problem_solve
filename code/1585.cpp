#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int i,t,count,sum,x,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
      cin>>a;
      x=strlen(a);
      sum=0;
      count=0;
      for(j=0;j<x;j++)
      {
          if(a[j]=='o')
          {
              count++;
              sum=sum+count;
          }
          if(a[j]=='x')
          {
              count=0;
          }
      }
      cout<<sum<<endl;

    }
}
