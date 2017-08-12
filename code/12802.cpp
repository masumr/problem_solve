#include<bits/stdc++.h>
using namespace std;
const int size=1000001;
bitset<size>p;
void sieve(){
    p[1]=1;
    for(int i=4;i<=size;i+=2) p[i]=1;
    for(int i=3;i*i<=size;i+=2){
        if(p[i]==0){
            for(int j=i*i;j<=size;j+=i*2) p[j]=1;
        }
    }
}
int main(){
    string n;
    sieve();
    while(cin>>n){
        int n1=atoi(n.c_str());
        reverse(n.begin(),n.end());
        int n2=atoi(n.c_str());
         printf("%d\n",(n1<<1));
        if(n1==n2 and p[n1]==0)break;
    }
}
