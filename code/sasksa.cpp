#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        n=(2*n*n)-(4*n)+2;
        printf("%lld\n",n);
    }
}
