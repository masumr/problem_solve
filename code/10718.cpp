#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;
int main(){
    ll N,U,L,ans;
    while(scanf("%lld %lld %lld",&N,&L,&U)!=EOF){
        ans = 0;
        for(int i=0; i<=32; ++i){
            ll state = (N & (1L<<(32-i)));
            if(state){
                ll temp = state -1;
                temp |= ans;
                if(temp < L){
                    ans |= state;
                }
            }
            else{
                ll temp = ans;
                temp |= (1L<<(32-i));
                if(temp <= U){
                    ans = temp;
                }
            }
        }
        printf("%lld\n",ans);
    }
}
