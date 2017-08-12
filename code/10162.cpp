#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll bigmod(ll n,ll p)
{
    if(p==1) return n;
    ll t=bigmod(n,p>>1);
    t=(t*t)%10;
    if(p&1)
        t=(t*n)%10;
    return t;
}
int main()
{
    string n;
    int a[101];
    a[0]=0;
    ll sum;
    for(int i=1;i<=100;i++)
        a[i]=(a[i-1]+bigmod(i,i))%10;
    while(cin>>n){
        if(n[0]=='0') return 0;
        int x=n.size();
        sum=0;
        for(int i=0;i<x;i++)
        {
            sum=(sum*10)+((int)n[i]-48);
            sum%=100;
        }
        cout<<a[sum]<<endl;
    }
}
