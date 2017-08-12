#include<bits/stdc++.h>
using namespace std;
struct node{
    int a,b;
    bool operator<(const node& p)const{
        return b>p.b;
    }
};
vector<pair<int,int> >v;
bool com(pair<int,int>a,pair<int,int>b){
    if(a.first<b.first)return true;
    else if(a.first==b.first){

        if(a.second<b.second)return true;
        else return false;
    }
    else return false;
}
int main(){
    int n;
    cin>>n;
    priority_queue<node>pq;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        node nd;
        nd.a=x;nd.b=y;
        pq.push(nd);
    }
    while(!pq.empty()){
        node nd=pq.top();
        pq.pop();
        cout<<nd.a<<' '<<nd.b<<endl;
    }
}
