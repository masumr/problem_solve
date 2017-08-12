#include<bits/stdc++.h>
using namespace std;
bool p(long n){
    for(int i=2;i*i<=n;i++)if(n%i==0)return false;
    return true;
}
int main(){
    if(p(1000000007)==true)cout<<1<<endl;
}
