#include<bits/stdc++.h>
using namespace std;
typedef unsigned int ul;
const int n=46346;
vector<ul>v,v1;
bitset<n>p;
void sieve(){
    for(int i=3;i*i<=n;i+=2)
        if(p[i]==0) for(int j=i*i;j<=n;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=n;i+=2)if(p[i]==0)v.push_back(i);
}
int main(){
    sieve();
    unsigned int a,b,x,y;
    while(cin>>a>>b){
        int sum=0;
        x=b,y=a;
        if(a>b)sum=0;
        else{
            int s=1;
            for(int i=0;i<v.size();i++){
                if(b%v[i]==0){
                    while(b%v[i]==0){
                        b/=v[i];
                        v1.push_back(v[i]);
                    }
                }
                if(b<v[i])break;
            }
            if(b>1)v1.push_back(b);
            for(int i=0;i<v1.size();i++){
                a/=v1[i];
            }
            if(a!=0)sum=0;
        }
        if(sum==0)printf("%d divides %d!\n",x,y);
        else printf("%d does not divide %d!\n",x,y);
        v1.clear();
    }
}
