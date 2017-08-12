#include<bits/stdc++.h>
using namespace std;
const int mx=100;
vector<int>graph[mx];
int topo[200];
bool visited[mx];
stack<int>top;
void dfs(int v){
    visited[v]=1;
    for(int i=0;i<graph[v].size();i++){
        int u=graph[v][i];
        if(!visited[u]){
            dfs(u);
        }
    }
    top.push(v);
}
int main()
{
    int edge,node;
    cin>>node>>edge;
    for(int i=0;i<edge;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
    }
    memset(visited,0,sizeof visited);
    cout<<"printing deparatue time: ";
    for(int i=1;i<=node;i++){
        if(!visited[i]){
            dfs(i);
        }
    }
    while(!top.empty()){
        cout<<top.top()<<' ';;
        top.pop();
    }
}
