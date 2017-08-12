#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,m,n,z;
    int a[200],b[4];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(int y=0;y<n;y++)
            cin>>a[y];
        if(n%4==0)
        {
            z=n/4;
            int x=0;
            for(int j=0;j<z;i++)
            {
                b[x]=0;
                for(int k=j;k<j+4;k++)
                {
                    b[x]=b[x]+a[k];
                }
                x++;
            }
            for(int j=0;j<z;j++)
                cout<<b[j]<<endl;
        }
        else
            cout<<"no"<<endl;
    }
}
