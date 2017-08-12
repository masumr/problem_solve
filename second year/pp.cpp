#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n,m;
    int t;
    scanf("%d",&t);
    while(t--){
        cin>>n>>m;
        ll sum=0;
        while(n--){
            ll x;
            cin>>x;
            x%=m;
            if(x)sum+=(m-x);
        }
        cout<<sum<<endl;
    }

}
