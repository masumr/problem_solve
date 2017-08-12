#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int a,b,sum;
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        int m=min(a,b);
        if(m==1)
        {
            sum=max(a,b);
        }
        else if(m==2)
        {
            int c=max(a,b);
            if(c%4==1)
            {
                sum=((c/4)*4)+2;
            }
            else
                sum=ceil((c/double(4))*4);
        }
        else
            sum=ceil((a*b)/double(2));
        printf("Case %d: %d\n",i,sum);
    }
}
