#include <stdio.h>
#include<map>
using namespace std;
const long long limit = 9876543210LL;
int Check(long long n) {
    map<int,int>mp;
    while(n){
        mp[n%10]++;
        if(mp[n%10]==2)return 0;
        n/=10;
    }
    return 1;
}
int main() {
    int T;
    long long n, m, i;
    scanf("%d", &T);
    while(T--) {
        scanf("%lld", &n);
        for(i = 1; n*i <= limit; i++) {
            m = n*i;
            if(Check(i) && Check(m))
                printf("%lld / %lld = %lld\n", m, i, n);
        }
        if(T)    puts("");
    }
    return 0;
}
