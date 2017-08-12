#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        for(int i=0;i<4;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        if(v[0]==v[1] && v[1]==v[2] && v[2]==v[3]) cout<<"square"<<endl;
        else if(v[0]==v[2] && v[1]==v[3]) cout<<"rectangle"<<endl;
        else{
            sort(v.begin(),v.end());
            ll sum=v[0]+v[1]+v[2];
            if(sum>=v[3] && v[0]!=0) cout<<"quadrangle"<<endl;
            else cout<<"banana"<<endl;
        }
        v.clear();
    }
}
