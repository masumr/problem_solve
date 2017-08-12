#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=123456;
ll a[N];
int main(){
    ll n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    ll sum=0;
    for(int i=1;i<=n;i++){
        if(sum+i<k){
            //cout<<s1<<' ';
            sum+=i;
        }
        else break;
    }
    //cout<<sum<<endl;
    k-=sum;
    //cout<<k<<' '<<sum<<endl;
    cout<<a[k-1]<<endl;
}
