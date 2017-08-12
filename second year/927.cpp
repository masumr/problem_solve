#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,p;
        ll k;
        scanf("%d",&n);
        n++;
        while(n--){
            ll x;
            scanf("%lld",&x);
            v.push_back(x);
        }
        scanf("%d %lld",&p,&k);
        ll sum=0;
        double lp=(double)(k*1.0/p);
        n=ceil((sqrt(8*lp+1)-1)/2.0);
           // cout<<n<<endl;
                //cout<<n<<endl;
                ll ans=0;
                for(int i=0;i<v.size();i++){
                    ans+=(v[i]*pow(n,i));
                }
                printf("%lld\n",ans);

        v.clear();
    }
}
