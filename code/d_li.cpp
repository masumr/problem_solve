#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int a,b,c;
int m=1000000007;
int main()
{
    int n;
    int i,t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&n);
        ll x[n+5];
        x[0]=a;
        x[1]=b;
        for(int j=2;j<=n;j++)
        {
            x[j]=(x[j-1]+x[j-2]+c)%m;
        }
        printf("Case %d: %lld\n",i,x[n]);
    }
}
