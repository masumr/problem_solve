#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    int i,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        scanf("%lld%lld",&a,&b);
        printf("Case %d: %lld\n",i,abs((a-b)-1));
    }
}
