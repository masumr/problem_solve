#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bitset<1000001>p;
vector<int>v;
void sieve(){
    v.push_back(2);
    for(ll i=3;i<=sqrt(1000001);i+=2){
        if(p[i]==0){
            for(ll j=i*i;j<=1000001;j+=(i*2)){
                p[j]=1;
            }
        }
    }
    for(int i=3;i<=1000001;i+=2){
        if(p[i]==0) v.push_back(i);
    }
    swap(v[1],v[2]);
}
int main(){
    sieve();
   int n, res, c2, c5;
    while (1 == scanf("%d", &n))
    {
        if (!n) break;
        res = 1;
        c2 = c5 = 0;
        for (int i = 2; i <= n; i *= 2) c2++;
        for (int i = 5; i <= n; i *= 5) c5++;
        for (int i = 0; i < c2 - c5; ++i) res = (res * 2) % 10;
        for (int i = 2; i <v.size(); ++i)
        {
            if (v[i] > n) break;
            for (ll j = v[i]; j <= n; j *= v[i])
                res = (res * v[i]) % 10;
        }
        printf("%d\n", res);
    }
    return 0;
}

