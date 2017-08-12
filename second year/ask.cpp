#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll m,n,x,y;
        scanf("%lld%lld%lld%lld",&m,&n,&x,&y);
        ll sum=min(n-y,m-x)+min(y-1,m-x)+min(x-1,n-y)+min(x,y);
        printf("%lld\n",sum);
    }
}
