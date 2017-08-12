#include<bits/stdc++.h>
using namespace std;
const int size=1000001;
bitset<size>p;
void sieve(){
    p[1]=1;
    for(int i=4;i<=size;i+=2) p[i]=1;
    for(int i=3;i*i<=size;i+=2){
        if(p[i]==0){
            for(int j=i*i;j<=size;j+=i*2) p[j]=1;
        }
    }
}
int main(){
    int n;
    sieve();
    while(scanf("%d",&n)){
        int x=n,sum=0;
        while(x){
            sum=(sum*10+(x%10));
            x/=10;
        }
        printf("%d\n",(n<<1));
        if(n==sum and p[n]==0)break;
    }
}

