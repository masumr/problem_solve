#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b,c) for(int i=a;i<=b;i+=c)
typedef long long int ll;
vector<ll>a,b;
bitset<1001>p;
void sieve(){
    b.push_back(2);
    for(int i=3;i<=1001;i+=2){
        if(p[i]==0){
            b.push_back(i);
            for(int j=i*i;j<=1001;j+=i)
                p[j]=1;
        }
    }
}
ll pf(int n){
    int count=0;
    for(int i=0;i<b.size();i++){
        while(n%b[i]==0){
            count++;
            n/=b[i];
        }
        if(n<b[i]) break;
    }
    if(n>1) count++;
    return count;
}
int main(){
    sieve();
    ll sum=0;
    for(ll i=2;i<=1000001;i++){
        sum+=pf(i);
        a.push_back(sum);
    }
    int x;
    while(cin>>x)
        cout<<a[x-2]<<endl;
}
