#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=123456;
ll a[N];
ll b[N];
ll c[N];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>b[i]>>a[i];
    int k=0;
    for(int i=1;i<n;i++)c[i-1]=b[i]-b[i-1];
    //for(int i=0;i<n-1;i++)cout<<c[i]<<' ';
    //cout<<endl;
    int count=0;
    for(int i=0;i<n;i++){
        cout<<c[i-1]<<' '<<c[i]<<' '<<a[i]<<endl;
        if(a[i]<=c[i-1] && i){
            //cout<<a[i]<<' '<<c[i-1]<<endl;
            count++;
        }
        else if(a[i]<=c[i] && i!=n-1){
            count++;
            //cout<<c[i]<<' '<<a[i]<<endl;
            c[i]-=a[i];
        }
        else c[i+1]+=c[i];
    }
    cout<<count<<endl;
}
