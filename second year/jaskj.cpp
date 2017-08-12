#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=123456;
ll a[N],b[N];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)scanf("%lld%lld",&a[i],&b[i]);
    int cnt;
    if(n>=2)cnt=2;
    else cnt=1;
    for(int i=1;i<n-1;i++){
        //cout<<a[i]<<' '<<a[i-1]<<' '<<a[i+1]<<' '<<b[i]<<endl;
        //cout<<a[i+1]-a[i]<<' '<<b[i]<<endl;
        if(abs(a[i]-a[i-1])>b[i]){
            //cout<<a[i]<<' '<<a[i-1]<<endl;
            cnt++;
        }
        else if(abs(a[i+1]-a[i])>b[i]){
            //cout<<a[i+1]<<' '<<a[i]<<endl;
            cnt++;
            a[i]+=b[i];
        }
    }
    cout<<cnt<<endl;
}
