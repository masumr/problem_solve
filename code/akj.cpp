#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int nn=10000003;
bitset<nn>p;
vector<ll>v3;
int k;
ll v[664600];
ll v2[664600];
ll v1[900][900];
ll v4[900];
ll  x,y;
void sieve(){
    k=1;
    v[0]=2;
    for(int i=3;i*i<=nn;i+=2)if(p[i]==0)for(int j=i*i;j<=nn;j+=(i*2))p[j]=1;
    for(int i=3;i<=nn;i+=2)if(p[i]==0)v[k++]=i;
}
void NOD(ll n){
    x=1,y=0;
    for(int i=0;i<k;i++){
        if(n%v[i]==0){
            int count=0;
            ll sum=1;
            v3.push_back(v[i]);
            y=0;
            while(n%v[i]==0){
                n/=v[i];
                sum*=v[i];
                v1[x][y++]=sum;
            }
            v4[x]=y;
            x++;
        }
    }
    if(n>1){
        v1[x][y]=n;
        v3.push_back(n);
        v4[x]=1;
        x++;
    }
}
ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}
int main(){
    k=1;
    sieve();
    ll n;
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        x=1,y=0;
         NOD(n);
         ll k=0;
         set<ll>s;
         s.insert(1);
        for(int i=1;i<x;i++){
            for(int j=0;j<v4[i];j++){
                ll xx=v1[i][j];
                s.insert(xx);
            }
        }
        for(set<ll>::iterator it=s.begin();it!=s.end();it++)v2[k++]=*it;
        for(int i=0;i<k;i++){
            for(int j=i;j<k;j++){
                if(v2[j]%v2[i]!=0)s.insert(v2[i]*v2[j]);
                s.insert(n/v2[j]);
            }
        }
        k=0;
        for(set<ll>::iterator it=s.begin();it!=s.end();it++)v2[k++]=*it;
        ll count=0;
        //for(int i=0;i<k;i++)cout<<v2[i]<<' ';cout<<endl;
        for(int i=0;i<k;i++){
            for(int j=i;j<k;j++){
                ll ans=lcm(v2[i],v2[j]);
                if(ans==n)count++;
            }
        }
        printf("Case %d: %lld\n",++c,count);
       s.clear();;
    }
}
