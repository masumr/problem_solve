#include <stdio.h>
#include<iostream>
using namespace std;
typedef long long int ul;
ul ans;
ul ara[16];
ul gcd(ul a, ul b){while(b)b ^= a ^= b ^= a %= b;return a;}
ul lcm(ul a,ul b){return (a/gcd(a,b))*b;}
ul recurs(ul ara[],ul i,ul j,ul num,ul numofele,ul n) {
    if (i==numofele) return 0;
    ul x, y;
    for (x = i; x <numofele; x++) {
        y = lcm(ara[x], j);
        if ((num+1)%2==1) ans+=(n/y);
        else ans-=(n/y);
        //cout<<n/y<<' ';
        recurs(ara, x+1, y,num+1,numofele, n);
    }
}
int main() {
   ul t,c=0;
   cin>>t;
   while(t--){
        ans=0;
        ul n,m;
        cin>>n>>m;
        for(ul i=0;i<m;i++)cin>>ara[i];
        recurs(ara, 0, 1, 0, m, n);
        printf("Case %d: %d\n",++c,n-ans);
   }
}
