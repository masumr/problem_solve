#include<bits/stdc++.h>
using namespace std;
typedef long long int ul;
const ul nn=65600;
bitset<nn>p;
ul v[nn];
vector<ul>v1;
map<ul,ul>mp;
ul k;
void sieve(){
    k=0;
    for(ul i=3;i*i<=nn;i+=2)if(p[i]==0)for(ul j=i*i;j<=nn;j+=(i*2))p[j]=1;
    v[k++]=2;
    for(ul i=3;i<=nn;i+=2)if(p[i]==0)v[k++]=i;
}
void nod(ul n){
    for(ul i=0;i<k and v[i]*v[i]<=n;i++){
        if(n%v[i]==0){
            ul count=0;
            v1.push_back(v[i]);
            while(n%v[i]==0){count++;n/=v[i];}
            mp[v[i]]=count;
        }
    }
    if(n>1){
        v1.push_back(n);
        mp[n]=1;
    }
}
ul gcd(ul a, ul b) {
	while(b) b^=a^=b^=a%=b;
	return a;
}
int main(){
    k=0;
    sieve();
    ul n,t,c=0;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        ul cn=0;
        if(n<0){
            n=-n;
            cn++;
        }
        printf("Case %u: ",++c);
        if(n==1){printf("1\n");continue;}
        nod(n);
        ul count=1;
        ul x=mp[v1[0]];
        for(ul i=0;i<v1.size();i++){
            x=gcd(x,mp[v1[i]]);
            //cout<<v1[i]<<' '<<mp[v1[i]]<<endl;

        }
        //cout<<count<<endl;
        if(cn)while(x%2==0)x/=2;
        printf("%lld\n",x);
        v1.clear();mp.clear();
    }
}
