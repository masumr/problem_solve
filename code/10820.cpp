#include<bits/stdc++.h>
using namespace std;
const int nn=225;
int a[nn*nn];
bitset<nn>p;
vector<int>v;
void sieve(){
    for(int i=3;i*i<=nn;i+=2)if(p[i]==0)for(int j=i*i;j<=nn;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=nn;i+=2)if(p[i]==0)v.push_back(i);
}
int phi(int n){
    int sum=n;
    for(int i=0;i<v.size()&&v[i]*v[i]<=n;i++){
        if(n%v[i]==0){
            sum=(sum/v[i])*(v[i]-1);
            while(n%v[i]==0)n/=v[i];
        }
    }
    if(n>1)sum=(sum/n)*(n-1);
    return sum;
}
int main(){
    sieve();
    a[1]=1;
    for(int i=2;i<=50001;i++){
        a[i]=a[i-1]+2*phi(i);
    }
    int n;
    while(scanf("%d",&n) && n!=0 ) printf("%d\n",a[n]);
}
