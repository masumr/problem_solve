#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[300];

    int x,m,n,k,i,j,p;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        int temp=0,b=1;
        a[0]=1;
        int sum=n-m;
        int num=m;
        int u[100]={0};
        if(sum>m)
            swap(sum,m);
        for(i=m+1;i<=n;i++)
        {
            p=i;

            for(k=2;k<=sum;k++)
            {
                if(u[k]==0)
                {
                    if(p%k==0)
                    {
                        p/=k;
                        u[k]=1;
                        k++;
                    }
                }
            }
            for(j=0;j<b;j++)
            {
                x=a[j]*p+temp;
                a[j]=x%10;
                temp=x/10;
            }
            while(temp>0)
            {
                a[b]=temp%10;
                temp=temp/10;
                b++;
            }
        }
        printf("%d things taken %d at a time is ",n,num);
        for(int h=b-1;h>=0;h--)
            cout<<a[h];
        cout<<" exactly."<<endl;
    }
}
