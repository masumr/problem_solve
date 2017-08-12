#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=1000003;
ll a[N+7];
int _binary_search(int lo,int hi,ll n){
   // cout<<lo<<' '<<hi<<' ';
    if(lo>=hi)return lo;
    int mid=(lo+hi)/2;
    //cout<<a[mid]<<' '<<n<<endl;
    if(a[mid]>=n)return _binary_search(lo,mid,n);
    else return _binary_search(mid+1,hi,n);
}
int main(){
   for(ll i=0;i<=N;i++)a[i]=i*i;
   //ll s=N*N;
   //cout<<s<<' '<<' '<<a[N]<<' '<<N<<endl;
   //for(int i=0;i<=10;i++)cout<<a[i]<<' ';
   int t;
    //cout<<(_binary_search(0,N-5,16))<<endl;
   scanf("%d",&t);
   while(t--){
        ll n;
        scanf("%lld",&n);
        bool ck=0;
        for(ll i=0;i<N && a[i]<=n;i++){
            ll ss=n-a[i];
            int tt=_binary_search(0,N,ss);
            while(a[tt]>ss)tt--;
            //cout<<ss<<' '<<a[tt]<<endl;
            if(a[tt]==ss){
                ck=1;
                break;
            }
        }
        if(ck)printf("Yes\n");
        else printf("No\n");
   }
}
