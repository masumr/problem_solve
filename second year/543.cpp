#include<bits/stdc++.h>
using namespace std;
vector<int>v;
map<int,int>mp;
const int size=1000001;
bitset<size>p;
void sieve(){
    v.push_back(2);
    mp[2]=1;
    for(int i=3;i<=sqrt(size)+1;i+=2){
        if(p[i]==0){
            for(int j=i*i;j<=size;j+=(i<<1))
                p[j]=1;
        }
    }
    for(int i=3;i<=size;i+=2){
        if(p[i]==0){
            mp[i]=1;
            v.push_back(i);
        }
    }
}
int main(){
    sieve();
    int n;
    while(cin>>n){
        if(n==0) break;
        int c1=0,c2=0,s1,s2;
        for(int i=0;i<=v.size();i++){
            int sum=n-v[i];
            if(mp[sum]==1){
                s1=sum;
                s2=v[i];
                c1++;
                break;
            }
            if(n<v[i]){
                break;
            }
        }
        if(c1) printf("%d = %d + %d\n",n,s1,s2);
        else cout<<"Goldbach's conjecture is wrong."<<endl;
    }
}
