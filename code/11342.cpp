#include<cstdio>
#include<map>
#include<math.h>
using namespace std;
int a[227];
map<int,int>mp;
int main()
{
    for(int i=0; i<224; i++)
    {
        int sum=i*i;
        a[i]=sum;
        mp[sum]=1;
    }
    int n;
    int x,y,z;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int ck=0;
        scanf("%d",&n);
        for(int i=0; i*i<=n; i++)
        {
            for(int j=i; j*j<=n; j++)
            {
                int sum=(a[i]+a[j]);
                if(sum<=n)
                {
                    sum=n-sum;
                    if(mp[sum]==1)
                    {
                        ck=1;
                        x=i;
                        y=j;
                        z=sqrt(sum);
                        break;
                    }
                }
                else break;
            }
            if(ck)break;
        }
        if(ck)printf("%d %d %d\n",x,y,z);
        else printf("-1\n");

    }
}
