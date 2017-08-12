#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bitset<1000001>p;
vector<int>v;
void sieve(){
    p[1]=1;
    v.push_back(2);
    for(int i=4;i<=1000001;i+=2) p[i]=1;
    for(int i=3;i<=sqrt(1000001);i+=2){
        if(p[i]==0){
            for(int j=i*i;j<=1000001;j+=(i*2)){
                p[j]=1;
            }
        }
    }
    for(int i=3;i<=1000001;i+=2){
        if(p[i]==0) v.push_back(i);
    }
}
int main(){
    sieve();
    int n;
    while(cin>>n and n!=0){
        int count=0;
        int a,b;
        for(int i=0;i<v.size() and v[i]<=n/2;i++){
            int sum=n-v[i];
            if(p[sum]==0){
                a=v[i];
                b=n-v[i];
                count++;
                break;
            }
        }
        if(count)  cout << n << ':' <<endl<< a << '+' <<b<<endl;
        else cout << n << ':' <<endl<< "NO WAY!" <<endl;
    }
}
