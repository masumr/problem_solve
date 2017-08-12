#include<bits/stdc++.h>
using namespace std;
struct node{
    int u,v,w;
    bool operator <(const node& b)const{
        return w>b.w;
    }
};
vector<node>nd[1000];
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,cost;
        cin>>x>>y>>cost;
        node nd;
        nd.u=x;
        nd.v=y;
        nd.w=cost;
        nd.push_back(nd);
    }
    while(!q.empty()){
        node top=q.top();
        cout<<top.w<<' '<<top.c<<endl;
        q.pop();
    }
}
