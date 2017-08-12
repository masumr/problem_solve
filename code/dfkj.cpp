#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[1000],b[1000];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    vector<int>v1,v2;
    for(int i=1;i<n;i++){
        v1.push_back(a[i]-a[i-1]);
        v2.push_back(b[i]-b[i-1]);
    }
    int sk=(m-a[n-1])+a[0];
    //cout<<n<<' '<<a[n-1]<<' '<<a[0]<<endl;
    //cout<<sk<<endl;
    v1.push_back(sk);
    sk=(m-b[n-1])+b[0];
    v2.push_back(sk);
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    bool ck=1;
    for(int i=0;i<v1.size();i++){
       // cout<<v1[i]<<' '<<v2[i]<<endl;
        if(v1[i]!=v2[i]){
            cout<<"NO"<<endl;
            ck=0;
            break;
        }
    }
    if(ck)cout<<"YES"<<endl;
}
