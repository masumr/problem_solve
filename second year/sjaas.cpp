#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    x%=1024;
    while(n--){
        int vv;
        cin>>vv;
        v.push_back(vv);
    }
    for(int i=1;i<=x;i++){
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i+=2)v[i]^=y;
    }
    cout<<(*max_element(v.begin(),v.end()))<<' '<<(*min_element(v.begin(),v.end()))<<endl;
}
