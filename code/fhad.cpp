#include<bits/stdc++.h>
using namespace std;
const int nn=10007;
bitset<nn>p;
vector<int>v;
void sieve(){
    for(int i=3;i*i<=nn;i+=2)if(p[i]==0)for(int j=i*i;j<=nn;j+=(i<<1))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=nn;i+=2)if(p[i]==0)v.push_back(i);
}
int main(){
    sieve();
    cout<<v.size()<<endl;
    int n;
    while(scanf("%d",&n),n){
        int lo=0,hi=0;
        for(int i=0;i<v.size()&& v[i]<=n;i++);
    }
}
