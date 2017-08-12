#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int nn=10000003;
bitset<nn>p;
vector<ll>v3;
int k;
ll v[664600];
ll v2[664600];
ll v1[90000];
ll  x,y;
void sieve(){
    k=1;
    v[0]=2;
    for(int i=3;i*i<=nn;i+=2)if(p[i]==0)for(int j=i*i;j<=nn;j+=(i*2))p[j]=1;
    for(int i=3;i<=nn;i+=2)if(p[i]==0)v[k++]=i;
}
ll NOD(ll n){
    ll sum=1;
    for(int i=0;i<k;i++){
        if(n%v[i]==0){
            int count=0;
            while(n%v[i]==0){
                n/=v[i];
                count++;
            }
            sum*=((2*count)+1);
        }
    }
    if(n>1)sum*=3;
    return sum;
}
int main(){
    sieve();
    int t,c=0;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        printf("Case %d: %lld\n",++c,((NOD(n)+1)/2));
    }
}
