/*Masum Rana*/
/*uva 1185 no problem*/
/*problem name big number*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll  a[1000000];
ll  b[10000];
int main()
{
    ll temp=0,num;
    ll m=1;
    a[0]=1;
    for(int j=1;j<=10000;j++)
    {
        for(int k=0;k<m;k++)
        {
            num=a[k]*j+temp;
            a[k]=num%10;
            temp=num/10;
        }
        while(temp>0)
        {
            a[m]=temp%10;
            temp=temp/10;
            m++;
        }
        b[j]=m;
    }
    ll t,i,n;
    cin>>t;
   	for(i=1;i<=t;i++)
   	{
   		cin>>n;
   		cout<<b[n]<<endl;
   	}
}
