#include<bits/stdc++.h>
using namespace std;
const int N=1234;
bitset<N>p;
void sieve(){
    p[0]=1;p[1]=1;
    for(int i=4;i<=N;i+=2)p[i]=1;
    for(int i=3;i*i<=N;i+=2)if(!p[i])for(int j=i*i;j<=N;j+=(i*2))p[j]=1;
}
int main(){
    int t;
    sieve();
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int sum=0;
        while(n--){
            int x;
            scanf("%d",&x);
            if(!p[x])sum+=x;
        }
        printf("%d\n",sum);
    }
}
