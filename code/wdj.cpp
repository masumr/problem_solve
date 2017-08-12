#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int nn=10000003;
bitset<nn>p;
vector<ll>v3;
int k;
ll v[664600];
ll v2[664600];
ll v1[900][664600];
ll  x,y;
void sieve(){
    k=1;
    v[0]=2;
    for(int i=3;i*i<=nn;i+=2)if(p[i]==0)for(int j=i*i;j<=nn;j+=(i*2))p[j]=1;
    for(int i=3;i<=nn;i+=2)if(p[i]==0)v[k++]=i;
}
void NOD(ll n){
    x=0,y=0;
    for(int i=0;i<k;i++){
        if(n%v[i]==0){
            int count=0;
            ll sum=1;
            v3.push_back(v[i]);
            while(n%v[i]==0){
                n/=v[i];
                sum*=v[i];
                v1[x][y++]=(v[i]);
            }
            x++;
        }
    }
    if(n>1){
        v1[x++]=n;
        v3.push_back(n);
    }
}
ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){
    return (a/gcd(a,b))*b;
}
int main(){
    k=1;
    sieve();
    ll n;
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        x=1;
        NOD(n);
        //for(int i=0;i<x;i++)cout<<v1[i]<<' ';cout<<endl;
        set<ll>s;
        v1[0]=1;
        for(int i=0;i<x;i++){
            s.insert(v1[i]);
            for(int j=i+1;j<x;j++){
                ll sum=(v1[i]*v1[j]);
                s.insert(sum);
            }
        }
        for(int i=0;i<x;i++){
            s.insert(v1[i]);
            for(int j=i+1;j<x;j++){
                ll sum=(v1[i]*v1[j]);
                s.insert(sum);
                for(int k=0;k<v3.size();k++){
                    s.insert(sum*v3[k]);
                }
            }
        }
        ll k=0;
        for(set<ll>::iterator it=s.begin();it!=s.end();it++){
                v2[k++]=(*it);
        }
        //s.clear();
        for(int i=0;i<k;i++) {
                s.insert(n/v2[i]);
        }
        k=0;
        for(set<ll>::iterator it=s.begin();it!=s.end();it++){
                cout<<*it<<' ';
                v2[k++]=(*it);
        }
        cout<<endl;
        //for(int i=0;i<k;i++)cout<<v2[i]<<' ';
        //cout<<endl;
        ll count=0;
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
