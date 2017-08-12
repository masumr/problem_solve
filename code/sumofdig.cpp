#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[12];
ll sod(ll n){
    if(n<10)return (n*(n+1))/2;
    int d=log10(n);
    memset(a,0,sizeof a);
    a[1]=45;
    for(int i=2;i<=d;i++)a[i]=a[i-1]*10+45*ceil(pow(10,i-1));
    ll p=ceil(pow(10,d));
    ll msd=n/p;
    return (msd*a[d]+((msd*(msd-1))/2*p)+msd*(1+n%p)+sod(n%p));
}
int main(){
    ll f,l;
    while(scanf("%lld%lld",&f,&l)==2){
        if(f<0 && l<0)return 0;
        printf("%lld\n",sod(l)-sod(f-1));
    }
}
