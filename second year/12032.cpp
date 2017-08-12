#include<bits/stdc++.h>
using namespace std;
const int N=123456;
int a[N];
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int x,y=0,mx=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&x);
            a[i]=x-y;
            mx=max(mx,a[i]);
            y=x;
        }
        for(int i=1;i<=n;i++){
            if(mx==a[i]){
                mx++;
            }
        }
        printf("Case %d: %d\n",++c,mx);
    }
}
