#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll si=1000001;
bitset<si>p;
vector<ll>v;
void sieve(){
    v.push_back(2);
    for(ll i=3;i<=si;i+=2){
        if(p[i]==0){
            v.push_back(i);
            for(ll j=i*i;j<=si;j+=(i<<1)){
                p[j]=1;
            }
        }
    }
}
int main(){
    sieve();
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        ll x=sqrt(n);
        ll s=1;
        for(int i=0;i<v.size() && x>=v[i];i++){
                if(n<v[i]) break;
                int count=1;
                while(n%v[i]==0){
                    count++;
                    n/=v[i];
                }
            s*=count;
        }
        if(n>1) s*=2;
        s--;
        printf("Case %d: %lld\n",++c,s);
    }

}
