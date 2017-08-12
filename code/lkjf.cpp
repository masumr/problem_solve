#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n,m;
    cin>>n>>m;
    set<ll>s;
    ll a[21][21];
    memset(a,0,sizeof a);
    for(int  i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>a[i][j];
    }
    int count=0,c=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i-1][j]!=a[i][j] and j+1<m){
                //cout<<a[i-1][j]<<' '<<a[i][j]<<' '<<a[i-1][j+1]<<endl;
                if(a[i][j]==a[i-1][j+1]){
                    count++;
                    j++;
                }
            }
        }
    }
    //cout<<count<<' '<<c<<endl;
    if(count<=n+1 && c==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
