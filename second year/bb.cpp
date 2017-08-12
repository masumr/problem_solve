#include<bits/stdc++.h>
using namespace std;
const int N=5500;
typedef long long int ll;
ll a[N],b[N];
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        for(int i=1; i<=n; i++)scanf("%lld",&a[i]);
        ll mx=-12345678,sum=0;
        if(k)mx=0;
        ll val=0;
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(a[i]<0)continue;
            val=0,cnt=0;sum=0;
            for(int j=i;j<=n;j++){
                sum+=a[j];
                if(a[j]<0){
                    if(cnt<k){
                        val+=a[j];
                        b[cnt++]=a[j];
                    }
                    else{
                        ll mk=-12345678;
                        int id=0;
                        for(int p=0;p<cnt;p++){
                            if(b[p]>mk){
                                mk=b[p];
                                id=p;
                            }
                        }
                        if(mk>a[j]){
                            val-=mk;
                            val+=a[j];
                            b[id]=a[j];
                        }
                    }
                }
                mx=max(mx,sum-val);
                if(sum-val<0){
                    break;
                }
            }
        }
        for(int i=1;i<=n;i++)mx=max(mx,a[i]);
        printf("Case %d: %lld\n",++c,mx);
    }

}
