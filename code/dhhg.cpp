#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n,m;
    cin>>n>>m;
    set<ll>s,sa;
    ll a[21][21],count=0;
    for(int  i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>a[i][j];
    }
    for(int i=0;i<m;i++)sa.insert(a[0][i]);
    for(int  i=0;i<n;i++){
        for(int j=0;j<m;j++)s.insert(a[i][j]);
        if(sa.size()==s.size()) count++;
        s.clear();
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++) s.insert(a[i][j]);
        if(s.size()<=2) count++;
        //cout<<s.size()<<endl;
        s.clear();
    }
    //cout<<count<<endl;
    if(count==m+n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
