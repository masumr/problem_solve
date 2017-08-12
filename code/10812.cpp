#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a<b) cout<<"impossible"<<endl;
        else{
            ll sum=(a+b)/2;
            if(2*sum-b==a) cout<<sum<<' '<<a-sum<<endl;
            else cout<<"impossible"<<endl;
        }
    }
}
