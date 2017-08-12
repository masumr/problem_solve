#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(i=a;i<b;i++)
const int size=100;
vector<int>edge[size],cost[size];
int dis[size];
bitset<size>visit;
const int infinity=1000000;
int bfs(int s,int d){
    queue<int>q;
    q.push(s);
    visit[s]=1;

}
int main(){
    int n,i;
    cin>>n;
    For(i,1,n) dis[i]=infinity;
}
