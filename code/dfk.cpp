#include<bits/stdc++.h>
using namespace std;
int main(){
    int fib[50];
    fib[1]=1;
    fib[2]=3;
    for(int i=3;i<=44;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    //cout<<fib[44]<<endl;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fib[n]<<endl;
    }
}
