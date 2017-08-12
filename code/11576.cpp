#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,i,k,cf[100]={0};
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        char a[y][x];
        char b[x*y];
        for(int j=0;j<y;j++)
        {
            cin>>a[j];
        }
        strcpy(b,a[0]);
        for(int j=1;j<y-1;j++)
        {
            strcat(b,a[j]);
        }
        int d=strlen(b);
        for(k=0;k<d;k++)
        {
            for(int t=k;t<d;t++)
            {
                if(b[k]==b[t])
                    cf[t]=1;
            }
        }
        int count=0;
        for(k=0;k<d;k++)
        {
            if(cf[k]==1)
                count++;
        }
        cout<<(d-count)<<endl;


    }
}
