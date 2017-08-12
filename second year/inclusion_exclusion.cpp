#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=15;
ll a[N];
int n,m,ans;
ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
ll re(int i,ll j,int num){
    if(i==n)return 0;
    for(int x=i;x<n;x++){
        ll l=lcm(a[x],j);
        if((num+1)%2)ans+=(m/l);
        else ans-=(m/l);
        re(x+1,l,num+1);
    }
}
int main(){
   scanf("%d%d",&m,&n);
   for(int i=0;i<n;i++)scanf("%lld",&a[i]);
   ans=0;
   re(0,1,0);
   printf("%lld\n",ans);
}
