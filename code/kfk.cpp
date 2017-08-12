#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    scanf("%d",&n);
    ll sum=0;
    while(n--){
        ll x;
        scanf("%lld",&x);
        sum+=x;
    }
    printf("%lld",sum);
}
