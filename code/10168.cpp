#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bitset<10000001>p;
vector<int>v;
void sieve(){
    v.push_back(2);
    for(int i=4;i<=10000001;i+=2) p[i]=1;
    for(int i=3;i<=sqrt(10000001);i+=2){
        if(p[i]==0){
            for(int j=i*i;j<=10000001;j+=(i*2)){
                p[j]=1;
            }
        }
    }
    for(int i=3;i<=10000001;i+=2){
        if(p[i]==0) v.push_back(i);
    }
}
int main(){
    int n;
    sieve();
    while(cin>>n){
        if(n<8) cout<<"Impossible."<<endl;
        else{
            int y;
            if(n&1) y=3;
            else y=2;
            n-=(y+2);
            int a,b;
            for(int i=0;i<v.size();i++){
                if(p[n-v[i]]==0){
                    a=v[i];
                    b=(n-v[i]);
                    break;
                }
            }
            cout<<2<<' '<<y<<' '<<a<<' '<<b<<endl;
        }
    }
}
