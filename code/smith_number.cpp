#include<bits/stdc++.h>
using namespace std;
const int N=800;
bitset<N>p;
vector<int>v;
void sieve(){
    for(int i=4;i<=N;i+=2)p[i]=1;
    for(int i=3;i*i<=N;i+=2)if(!p[i])for(int j=i*i;j<=N;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=N;i+=2)if(!p[i])v.push_back(i);
}
int sod(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int pf(int n){
    int sum=0,ll=n;
    for(int i=0;i<v.size() and v[i]*v[i]<=n;i++){
        while(n%v[i]==0){
            sum+=sod(v[i]);
            n/=v[i];
        }
    }
    if(n>1)sum+=sod(n);
    return sum;
}
int main(){
    sieve();
    vector<int>cc;
    cc.push_back(0);
    for(int i=3;i<=N;i++){
        if(p[i])if(pf(i)==sod(i))cc.push_back(i);
    }
    int n;
    cin>>n;
    cout<<cc[n]<<endl;
}
