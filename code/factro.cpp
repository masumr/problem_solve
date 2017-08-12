#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200],m=1,temp=0,i,j,x,k;
    a[0]=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<m;j++)
        {
            x=a[j]*i+temp;
            a[j]=x%10;
            temp=x/10;
        }
        while(temp>0)
        {
            a[m]=temp%10;
            temp=temp/10;
            m++;
        }
    }
    for(k=m-1;k>=0;k--)
        cout<<a[k];
}
