#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bitset<1001>p;
vector<int>v;
void sieve(){
    v.push_back(2);
    for(int i=4;i<=1001;i+=2) p[i]=1;
    for(int i=3;i<=sqrt(1001);i+=2){
        if(p[i]==0){
            for(int j=i*i;j<=1001;j+=(i*2)){
                p[j]=1;
            }
        }
    }
    for(int i=3;i<=1001;i+=2){
        if(p[i]==0) v.push_back(i);
    }
}
int main(){
    sieve();
    int n;
    while(cin>>n and n!=0){
        int count=0;
        int x=n;
        for(int i=0;i<v.size() and v[i]<=n;i++){
            if(n%v[i]==0){
                count++;
                while(n%v[i]==0){
                    n/=v[i];
                }
            }
        }
        if(n>1) count++;
        cout<<x<<" : "<<count<<endl;
    }
}
