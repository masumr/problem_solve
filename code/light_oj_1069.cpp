#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,sum;
    ll i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        if(a<=b)
            sum=(b*4)+19;
        else
            sum=((a+(a-b))*4)+19;
        printf("Case %lld: %lld\n",i,sum);
    }
}
