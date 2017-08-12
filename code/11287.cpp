#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int nn=1000000007;
unsigned int p[nn/32];
unsigned int a[10000000];
int k;
void sieve(){
    for(unsigned int i=3;i*i<=nn;i+=2){
        if(p[i>>5]&(1<<(i&31))==0){
           for(unsigned int j=i*i;j<=nn;j+=(i<<1)){
                p[j>>5]=(p[j>>5]|(1<<(j&31)));
           }
        }
    }
    k=0;
    a[k++]=2;
    for(unsigned int i=3;i<=nn;i+=2)if(p[i>>5]&(1<<(i&31))==0)a[k++]=i;
}
int main(){
    k=0;
    sieve();
    for(int i=0;i<10;i++)cout<<a[i]<<' ';
}
