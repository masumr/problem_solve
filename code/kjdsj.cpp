#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int a1,b,temp,x,m=1,j,i,k;
    while(cin>>a1)
    {
        cout<<a1<<"!"<<endl;
        temp=0;
        m=1;
        a[0]=1;
        for(i=1;i<=a1;i++)
        {
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
        }
        for(k=m-1;k>=0;k--)
            cout<<a[k];
        cout<<endl;
    }
}
