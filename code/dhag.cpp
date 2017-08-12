#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[100007];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    ll mx,count=0,sum=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==1 && count==0){
            mx=a[i];
            count++;
        }
        sum+=a[i];
    }
    if(sum%2==1)sum-=mx;
    cout<<sum<<endl;
}
