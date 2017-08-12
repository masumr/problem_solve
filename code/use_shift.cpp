#include<bits/stdc++.h>
using namespace std;
void binary(int n){
    if(n<=1){cout<<n;return;}
    int rem=n&1;
    binary(n>>1);
    cout<<rem;
}
int main(){
    int n;
    while(scanf("%d",&n)){
        int b=n;
        cout<<"use left shif: "<<n<<endl;
        binary(n);
        cout<<endl;
        n<<=1;
        cout<<n<<endl;
        binary(n);
        cout<<endl;
        b>>=1;
        binary(b);
        cout<<endl;
    }
}
