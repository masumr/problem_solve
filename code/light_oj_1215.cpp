#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    ll a,b,c,l;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>l;
        if(a<b)
            swap(a,b);
        ll sum=lcm(a,b);
        printf("Case %d: ",i);
        if(l%sum!=0)
            cout<<"impossible"<<endl;
        else{
            int num=gcd(l,sum);
            ll k=(l/sum);
            ll j=k;
            while(j<=l)
                {
                    if((j/(gcd(sum,j)))==k){
                        cout<<j<<endl;
                        break;
                    }
                    j+=k;
                }
            }

    }
}
