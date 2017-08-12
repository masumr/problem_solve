#include<bits/stdc++.h>
using namespace std;
const int N=2e5+7;
typedef long  long int ll;
ll a[N];
int main(){
    int n;
    ll k;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    ll mo=a[0]%k;
    bool ck=0;
    ll mx=a[0];
    for(int i=1;i<n;i++){
        mx=min(mx,a[i]);
        if(mo!=a[i]%k){
            ck=1;
            break;
        }
    }
    if(ck)cout<<-1<<endl;
    else{
        ll sum=0;
        for(int i=0;i<n;i++){
            ll dif=a[i]-mx;
            sum+=(dif/k);
        }
        cout<<sum<<endl;
    }
}
