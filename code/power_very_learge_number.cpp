#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],i,j,k=1,n,m,x,y;
    i=2;
    cin>>n;
    while(k<=n)
    {
        m=1;
        int temp=0;
        a[0]=1;
        for(j=0;j<m;j++)
        {
            x=(a[j]*i)+temp;
            a[j]=x%10;
            temp=x/10;
        }
        while(temp>0)
        {
            a[m]=temp%10;
            temp=temp/10;
            m++;
        }
        k++;
    }
    cout<<m<<endl;
    for(y=m-1;y>=0;y--)
        cout<<a[y];
    cout<<endl;

}
