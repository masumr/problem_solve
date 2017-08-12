#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<int,int>mp;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        mp[x]++;
    }
    ll sum=(mp[0]*(mp[0]-1))/2;
    //cout<<sum<<endl;
    for(int i=1;i<=10;i++){
        int k=-i;
       // cout<<mp[i]<<' '<<mp[k]<<' '<<i<<endl;
        sum+=mp[i]*mp[k];
    }
    cout<<sum<<endl;
}
