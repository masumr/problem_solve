#include<bits/stdc++.h>
using namespace std;
const int N=123456;
typedef long long int ll;
ll a[N];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    bool ck=0;
   // bool ck=0;
    for(int i=2;i<n;i++){
        if(a[i-1]+a[i-2]>a[i]){
            ck=1;
            break;
        }
    }
    if(ck)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
