#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
typedef double dl;
dl power(dl n,int p){
    if(p==0)return 1;
    if(p==1)return n;
    dl t=power(n,p/2);
    t=t*t;
    if(p%2)t=t*n;
    return t;
}
dl V(int p,dl r,int n){
    return ((dl)p*power(1+r,n));
}
int main(){
    int p=1000;
    cout<<"  "<<'P'<<"\t "<<'r'<<"\t  "<<'n'<<"\t"<<"V=P(1+r)^n"<<endl;
    cout<<"-----------------------------------------"<<endl;
    for(int i=1;i<=10;i++){
        for(dl r=.10;r<.21;r+=.01){
            for(int n=1;n<=10;n++){
                cout<<setprecision(2)<<fixed;
                cout<<(p*i)<<"\t"<<r<<"\t"<<n<<"\t"<<V(p*i,r,n)<<endl;
            }
        }
    }
    return 0;
}
