#include<bits/stdc++.h>
using namespace std;
typedef unsigned int ul;
const ul nn=45346;
bitset<nn>p;
vector<ul>v;
ul mas;
void sieve(){
    for(ul i=3;i*i<=nn;i+=2)if(p[i]==0)for(ul j=i*i;j<=nn;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(ul i=3;i<=nn;i+=2)if(p[i]==0)v.push_back(i);
}
ul phi(ul n){
    ul sum=n,c=0;
    mas=1;
    for(ul i=0;i<v.size() && v[i]<=n;i++){
        if(n%v[i]==0){
            c=1;
            sum=(sum/v[i])*(v[i]-1);
            while(n%v[i]==0){
                n/=v[i];
                c++;
            }
            mas*=c;
        }
    }
    if(n>1){
        sum=(sum/n)*(n-1);
        mas*=2;
    }
    return sum;
}
int main(){
    sieve();
    ul n;
    while(scanf("%u",&n)==1){
        if(n==1)printf("0\n");
        else{
            mas=0;
            ul sum=phi(n);
            sum--;
            //cout<<sum<<' '<<mas<<endl;
            printf("%u\n",n-(sum+mas));
        }
    }
}
