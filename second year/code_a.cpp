#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mx=0;
    int a,b,sum=0;
    while(n--){
        cin>>a>>b;
        sum-=a;
        sum=max(sum,0);
        sum+=b;
        mx=max(mx,sum);
    }
    cout<<mx<<endl;
}
