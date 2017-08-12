#include<bits/stdc++.h>
using namespace std;
const int N=1548578;
bitset<N>p;
void sieve(){
    for(int i=4;i<=N;i+=2)p[i]=1;
    for(int i=2;i*i<=N;i+=2)if(!p[i])for(int j=i*i;j<=N;j+=(i*2))p[j]=1;
    for(int i=4;i<=N;i++)if(p[i])for(int j=i*2;j<=N;j+=i)p[j]=0;
}
bitset<N>p1;
void sieve2(){
    for(int i=2;i*i<=N;i++)if(!p1[i])for(int j=i*i;j<=N;j+=i)p1[j]=1;
    for(int i=4;i<=N;i++)if(p1[i])for(int j=i*2;j<=N;j+=i)p1[j]=0;
}
int main(){
    //sieve();
    sieve2();
    int n;
    while(scanf("%d",&n)==1){
        int count=0;
        while(n--){
            int x;
            scanf("%d",&x);
           // cout<<p1[x]<<' '<<p[i]<<endl;
            if(p1[x])count++;
        }
        printf("%d\n",count);
    }
}
