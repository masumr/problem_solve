#include<bits/stdc++.h>
using namespace std;
const int N=123456;
bitset<N>p;
vector<int>v;
void sieve(){
    for(int i=3;i*i<=N;i+=2)if(!p[i])for(int j=i*i;j<=N;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=N;i+=2)if(!p[i])v.push_back(i);
}
void pf(int  n){
    for(int i=0;v[i]*v[i]<=n&& i<v.size();i++){if(n%v[i]==0)while(n%v[i]==0){cout<<v[i]<<' ';n/=v[i];}
    if(n>1)cout<<n<<endl;
}
int main(){
    sieve();
    pf(55);

}
