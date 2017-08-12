#include<bits/stdc++.h>
using namespace std;
int prime(long long n){
    long long i;
    for(i=2;i*i<=n;i++)if(n%i==0)return 0;
    return 1;
}
int main(){
    long long  n;
    cin>>n;
    if(prime(n)==1)cout<<"Prime"<<endl;
    else cout<<"Not prime"<<endl;
}
