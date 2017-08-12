#include<bits/stdc++.h>
using namespace std;
typedef long long int ul;
const int nn=32000;
bitset<nn>p;
vector<ul>v;
void sieve(){
    for(int i=3;i*i<=nn;i+=2)if(p[i]==0)for(int j=i*i;j<=nn;j+=(i<<1))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=nn;i+=2)if(p[i]==0)v.push_back(i);
}
bool cheack(ul n){
    for(int i=0;i<v.size() && v[i]*v[i]<=n;i++){
        if(n%v[i]==0)return false;
    }
    return true;
}
ul bigmod(ul n,ul p,ul mod){
    if(p==1)return n;
    ul t=bigmod(n,p>>1,mod);
    t=((t%mod)*(t%mod))%mod;
    if(p&1)t=((t%mod)*(n%mod))%mod;
    return t;
}
int main(){
    sieve();
    ul  n,a;
    while(cin>>n>>a &&(n!=0 && a!=0)){

            if(cheack(n)==true)cout<<"no"<<endl;
            else{
                ul sum=bigmod(a,n,n);
                //cout<<sum<<endl;
                if(sum==a)cout<<"yes"<<endl;
                else cout<<"no"<<endl;
            }

    }
}
