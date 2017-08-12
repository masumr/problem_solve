#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double dl;
ll n,m;
ll fun(dl n, dl x){
    dl sum=n-(n*x/100)+.001;
    return ceil(sum);
}
ll binary_search1(ll lo,ll hi, ll n){
    //cout<<lo<<' '<<hi<<endl;
    if(lo>=hi){
        return lo;
    }
    ll mid=(lo+hi)/2;
    if(fun(mid,m)>=n)binary_search1(lo,mid,n);
    else binary_search1(mid+1,hi,n);
}
int main(){
    while(scanf("%lld %lld",&n,&m)&&(n || m)){
        ll lo=0,hi=11121000000009;
        if(m==0 || m==100)printf("Not found\n");
        else{
            if(fun(n,m)==n)printf("Not found\n");
            else{
                ll tt=binary_search1(lo,hi,n);
                while(fun(tt,m)>=n){
                    //cout<<fun(tt,m)<<' '<<tt<<endl;
                    tt--;
                }
                //cout<<fun(tt,m)<<endl;
                if(tt)printf("%lld\n",tt);
                else printf("Not found\n");
            }

        }
    }
}
