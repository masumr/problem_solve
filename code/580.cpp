#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fib[80];
int main(){
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<80;i++)fib[i]=fib[i-1]+fib[i-2];
    int n;
    fib[0]=0;
    fib[1]=0;
    fib[2]=0;
    fib[3]=1;
    while(scanf("%d",&n) && n){
        n-=2;
        printf("%lld\n",fib[n*2]);
    }
}
