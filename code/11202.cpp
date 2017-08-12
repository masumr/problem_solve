#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        n=(n>>1)+(n&1);
        m=(m>>1)+(m&1);
        if(n==m){
            printf("%d\n",(n*(n+1))/2);
        }
        else{
            printf("%d\n",n*m);
        }
    }
}
