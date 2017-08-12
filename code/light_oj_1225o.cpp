#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum,b;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&a);
        b=a;
        sum=0;
        while(b!=0)
        {
            sum=(sum*10)+(b%10);
            b/=10;
        }
        printf("Case %d: ",i);
        if(sum==a)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
