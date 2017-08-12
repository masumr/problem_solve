#include<bits/stdc++.h>
using namespace std;
const int N=101;
int mx[N];
int a[N];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        memset(mx,0,sizeof mx);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                int x;
                scanf("%d",&x);
                a[j]=x+max(mx[j],mx[j-1]);
            }
            for(int j=1;j<=i;j++)mx[j]=a[j];
        }
        int mn=0;
        for(int i=1;i<=n;i++)mn=max(mn,mx[i]);
        printf("%d\n",mn);
    }
}
