#include<bits/stdc++.h>
using namespace std;
const int size=2240;
bitset<size>p;
vector<int>v;
void sieve(){
    for(int i=4;i<=size;i+=2)p[i]=1;
    for(int i=3;i*i<=size;i+=2)if(!p[i])for(int j=i*i;j<=size;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=size;i+=2)if(!p[i])v.push_back(i);
}
int sum(int n){
    int s=0;
    for(int i=0;i<v.size() && v[i]*v[i]<=n;i++)if(n%v[i]==0){
        s+=v[i];
        while(n%v[i]==0)n/=v[i];
    }
    if(n>1)s+=n;
    return s;
}
int a[5000007];
int main(){
    sieve();
    for(int i=3;i<=5000002;i++){
            int s=sum(i);
            if(s>2 || s%2)a[i]=((p[s]==0)?1:0);
    }
    int x,y;
    while(scanf("%d",&x) && x!=0){
        scanf("%d",&y);
        int ss=0;
        for(int i=x;i<=y;i++){
            ss+=a[i];
        }
        printf("%d\n",ss);
    }
}
