#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n;
    while(scanf("%lld",&n)==1){
        //cout<<n<<endl;
        long long t=0;
        for(int i=0;i<=32;i++){
            if(n&(1<<i)){
                t|=1<<(3-i/8)*8+(i%8);
            }
        }
        printf("%lld converts to %lld\n",n,t);
    }
}
