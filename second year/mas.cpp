#include<bits/stdc++.h>
using namespace std;
int first_digit(int n,int p){
    double sk=(double)1.0*p*log10(1.0*n);
    //cout<<sk<<endl;
    sk-=floor(sk);
    sk=pow(10,sk);
    while(sk<100)sk*=10;
    return sk;
}
int main(){
    int n,p;
    while(scanf("%d%d",&n,&p)==2){
        cout<<first_digit(n,p)<<endl;;
    }
}
