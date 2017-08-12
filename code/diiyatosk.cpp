#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int size=100001;
ll infinte=1000000000000;
vector<ll>a[size],cost[size];
ll dis[size];
ll vis[size];
ll path[size];
struct data
{
    ll city, dist;
    data(ll a, ll b)
    {
        city = a;
        dist = b;
    }
    bool operator < (const data &p ) const
    {
        return dist > p.dist;
    }
};
void dijktra(int s,int d)
{
    for(ll i=0;i<=d;i++)
        dis[i]=infinte;
    priority_queue< data >q;
    dis[s]=0;
    q.push(data(s,dis[s]));
    while(!q.empty())
    {
        data top=q.top();q.pop();
        ll u=top.city;
     //   ll cc=top.dist;
        for(ll i=0;i<a[u].size();i++)
        {
            ll v=a[u][i];
            if(dis[v]>dis[u]+cost[u][i]){
                dis[v]=dis[u]+cost[u][i];
                path[v]=u;
                q.push(data(v, dis[v]));
            }
        }
    }
}
void print(int x)
{
    if(x<=0)
        return;
    print(path[x]);
    cout<<x<<' ';
}
int main(){
    int n,e;
    cin>>n>>e;
    int x,y,z;
    for(int i=0;i<e;i++){
        cin>>x>>y>>z;
        a[x].push_back(y);
        a[y].push_back(x);
        cost[x].push_back(z);
        cost[y].push_back(z);
    }
    dijktra(1,n);
    if(dis[n]==infinte)
        cout<<-1<<endl;
    else print(n);
}

