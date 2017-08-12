#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,a,b,c,sum;
    cin>>n>>a>>b>>c;
    ll k=(b-c);
    if(a<=k)
        cout<<(n/a)<<endl;
    else
    {
        sum=(n/k)-(c/k);
        sum+=(n/a);
        if((n-c)%k!=0)
            sum--;
        cout<<sum<<endl;
    }
}
