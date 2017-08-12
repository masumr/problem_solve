#include<bits/stdc++.h>
using namespace std;
const int mx=100;
vector<int>graph[mx];
int topo[200],arr_time[mx],dep_time[mx],tym;
bool visited[mx];
void dfs_stack(int v)
{
    visited[v]=false;
    stack<int>s;
    s.push(v);
    while(!s.empty())
    {
        int car=s.top();s.pop();
        arr_time[car]=tym++;
        for(int it=0;it<graph[car].size();it++)
        {
            int v=graph[car][it];
            if(!visited[v]){
                s.push(v);
                visited[v]=true;
            }
        }
        topo[tym]=car;
        dep_time[car]=tym++;
    }
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
    for(int i=0;i<2*node;i++)
        topo[i]=-1;
    dfs_stack(1);
    cout<<"printing deparatue time: ";
    for(int i=1;i<=2*node;i++){
        if(topo[i]!=-1){
            cout<<topo[i]<<' ';
        }
    }
}
