#include<bits/stdc++.h>
using namespace std;
int num[51], val[51];
int w[51][1001];

int ways(int n, int k){
    if(w[n][k] != -1) return w[n][k];
    int ans = 0;
    for(int i = 0; i <= num[n] && i*val[n] <= k; i++ ){
        ans = ans + ways(n-1, k - i * val[n]) ;
        ans %= 100000007;
    }
 return w[n][k] = ans;
}

int main(){
    int N, K, t,c= 1;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d", &N, &K);
        for(int i = 1; i <= N; i++)
            scanf("%d", &val[i]);
        for( int i = 1; i <= N; i++ )
            scanf("%d", &num[i]);

    memset(w[0], 0, sizeof(int)* (K+1) );
    w[0][0] = 1;
    for( int i = 1; i <= N; i++ )
        memset(w[i], -1, sizeof(int)* (K+1) );

    printf("Case %d: %d\n", c++, ways(N, K));

    }
    return 0;
}
