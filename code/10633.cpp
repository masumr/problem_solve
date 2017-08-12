#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll z,i,m,l;
    ll L,no=0;
    while(cin>>z>>i>>m>>l and (z!=0 and i!=0 and m!=0 and l!=0)){
        ll s,c=0;
        map<ll,int>mp;
        while(1){
            s=((z*l)+i)%m;
            mp[s]++;
            if(mp[s]==2) break;
            l=s;
            c++;
        }
        printf("Case %lld: %lld\n",++no,c);
    }
}
