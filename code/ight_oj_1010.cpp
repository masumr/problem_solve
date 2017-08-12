#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int ans=0;
        if(n==1) ans=m;
        else if(m==1) ans=n;
        else if(n==2){
            ans=(m/4)*4;
            if(m%4==1) ans+=2;
            else if(m%4>1) ans+=4;
        }
        else if(m==2){
            ans=(n/4)*4;
            if(n%4==1) ans+=2;
            else if(n%4>1) ans+=4;
        }
        else ans=((m*n)+1)/2;
        printf("Case %d: %d\n",++c,ans);
    }
}
