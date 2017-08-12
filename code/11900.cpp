#include<bits/stdc++.h>
using namespace std;
const int N=33;
int a[N];
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n,p,q;
        scanf("%d%d%d",&n,&p,&q);
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        sort(a,a+n);
        int cnt=0,sum=0;
        for(int i=0;i<n;i++){
            if(sum+a[cnt]<=q){
            sum+=a[cnt];
            cnt++;
            }
            else break;
        }
        int mx=min(cnt,p);
        printf("Case %d: %d\n",++c,mx);

    }
}
