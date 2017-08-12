#include<bits/stdc++.h>
using namespace std;
int main(){
long long N, M, ans;
while(scanf("%lld %lld", &N, &M) == 2){
    if(M==0)
        cout<<1<<endl;
    else{
        ans = 1;
        for( long long int a =N; a >= (N-M+1); a-- ){
            ans *= a;
            while(ans %10 == 0) ans /= 10;
            ans %= 10000000000;
        }
        printf("%lld\n", ans%10);
    }
}
return 0;
}
