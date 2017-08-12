#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=1001;
ll sum[N],a[N];
vector<ll>v1,v;
int main(){
    int n,m;
    while(scanf("%d%d",&n,&m) && ( n && m)){
        for(int i=1;i<=n;i++){
            ll x;
            scanf("%lld",&x);
            v1.push_back(x);
            v.push_back(x);
        }
        ll mx=0;
        bool ck=0;
        for(int i=1;i<=n;i++){
            sum[0]=0;
            int len=v.size();
            for(int j=0;j<v.size();j++)sum[j+1]=sum[j]+v[j];
            if(!ck){
                mx=sum[len]%m;
                ck=1;
            }
            ll ss=0;
            v.clear();
            for(int j=1;j<=n-i;j++){
                ll sk=(v1[j-1]%m*(sum[len]-sum[j])%m)%m;
                v.push_back(sk);
                ss=(ss+sk)%m;
            }
            mx=max(mx,ss);
        }
        printf("%lld\n",mx);
        v1.clear();v.clear();
    }

}
