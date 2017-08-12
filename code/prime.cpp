#include<bits/stdc++.h>
using namespace std;
const int N=200000007;
int p[N/32+3];
void sieve(){
    for(int i=3;i*i<=N;i+=2){
        if((p[i/32]&(1<<i%32))==0){
            for(int j=i*i;j<=N;j+=(i*2)){
                p[j/32]|=(1<<j%32);
            }
        }
    }
}
int a[N];
int main(){
    sieve();
    int cnt=1;
    a[2]=cnt;
    for(int i=3;i<=N;i+=2){
        if((p[i/32]&(1<<i%32))==0) cnt++;
        a[i]=cnt;
        a[i+1]=cnt;
    }
    int t;
    int n;
    while(scanf("%d",&n) && n){
        double xx=a[n];
        double yy=n/log(n);
        printf("%.1lf\n",((abs(xx-yy))/xx)*100);
    }
}
