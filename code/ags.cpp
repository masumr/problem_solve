#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main(){
    int n;
    cin>>n;
    int x;
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>x;
        s.insert(x);
        mp[x]++;
    }
    int mx=0;
    for(set<int>::iterator it=s.begin();it!=s.end();it++)mx=max(mx,mp[*it]);
    cout<<mx<<endl;
}
