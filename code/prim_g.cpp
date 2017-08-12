#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=12345678;
vector<ll>v;
bitset<N>p;
ll a[1000009];
void sieve(){
    for(int i=3;i*i<=N;i+=2)if(!p[i])for(int j=i*i;j<=N;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=N;i+=2)if(!p[i])v.push_back(i);
}
int main(){
    sieve();
    int t;
    scanf("%d",&t);
    while(t--){
        ll n,m;
        memset(a,0,sizeof a);
        scanf("%lld%lld",&n,&m);
        while(n<2)n++;
        //cout<<n<<endl;
        for(int i=0;i<v.size() && v[i]*v[i]<=m;i++){
            ll s=((n/v[i]))*v[i];
            if(s<n)s+=v[i];
            if(s==v[i])s*=2;
            //cout<<s<<' '<<v[i]<<endl;
            for(ll j=s;j<=m;j+=v[i]){
                //cout<<j<<' ';
                a[j-n]=1;
            }
            //cout<<endl;
        }
        for(ll j=n;j<=m;j++)if(a[j-n]==0)cout<<j<<endl;
        if(t)cout<<endl;
    }
}

