#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,sum,sum1,x,y;
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum1=0;
        scanf("%lld",&a);
        for(int j=1;j<=a/2;j++)
        {
            x=j+1;
            y=a-(2*j+1);
            sum=(y-x);
            if(sum>0)
            {
                if(sum%2==1)
                    sum1++;
                sum1+=(sum/2);
            }

        }
        printf("Case %d: %lld\n",i,sum1);
    }
}
