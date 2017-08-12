#include<bits/stdc++.h>
using namespace std;
const int N=1100;
int a[N];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=1; i<=n; i++)scanf("%d",&a[i]);
        int ck=0;
        for(int i=2; i<=n; i++)
        {
            if(a[1]!=a[i])
            {
                ck=1;
                break;
            }

        }
        if(!ck)printf("neutral\n");
        else
        {
            ck=0;
            for(int i=2; i<=n; i++)
            {
                if(a[i]<a[i-1])
                {
                    ck=1;
                    break;
                }
            }
            if(!ck)printf("allGoodDays\n");
            else
            {
                ck=0;
                for(int i=2; i<=n; i++)
                {
                    if(a[i]>a[i-1])
                    {
                        ck=1;
                        break;
                    }
                }
                if(!ck)printf("allBadDays\n");
                else
                {
                    int cnt=0;
                    for(int i=3; i<=n; i++)
                    {
                        // cout<<a[i-2]<<' '<<a[i-1]<<' '<<a[i]<<endl;
                        if(a[i-2]<a[i-1] && a[i-1]>a[i])cnt++;
                    }
                    if(cnt<2)printf("none\n");
                    else printf("%d\n",cnt);
                }
            }

        }
    }
}
