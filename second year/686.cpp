#include<bits/stdc++.h>
using namespace std;
const int x=32770;
bitset<x>p;
vector<int>v;
void sieve(){
    v.push_back(2);
    for(int i=3;i<=x;i+=2){
        if(p[i]==0){
            v.push_back(i);
            for(int j=i*i;j<=x;j+=i)
                p[j]=1;
        }
    }
}
int main(){
    sieve();
    int n;
    while(cin>>n){
        if(n==0) break;
        int count=0;
        for(int i=0;i<v.size() && n>=v[i];i++){
            for(int j=i;j<v.size() && n>=v[i];j++){
                if(v[i]+v[j]==n){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}
