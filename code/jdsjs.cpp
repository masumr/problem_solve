#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll num= 1000000007;
ll pow(int n,int p)
{
    if(p==1) return n;
    ll t=pow(n,p>>1);
    t=(t*t)%num;
    if(p&1) t=(t*n)%num;
    return t;
}
int main()
{
    int n,m,i;
    int t,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll ans=1;
        ll x=sqrt(n);
        int count=0;
        while(n%2==0)
        {
            n/=2;
            count++;
        }
        if(count!=0){
            ans*=(pow(2,count*m+1)-1);
            ans%=num;
        }
        for(i=3;i<=x;i+=2)
        {
            count=0;
            while(n%i==0){
                n/=i;
                count++;
            }
            if(count!=0){
                ans*=(pow(i,count*m+1)-1)/(i-1);
                ans%=num;
            }
        }
        if(n>1){
            ans*=(pow(n,m+1)-1)/(n-1);
            ans%=num;
        }
        printf("Case %d: %lld\n",++c,ans);
    }
}
