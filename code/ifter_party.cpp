#include<bits/stdc++.h>
using namespace std;
vector<string>a[1010];
map<string,int>visit;
map<string,int>dis;
int i;
void bfs(string s)
{
    queue<string>q;
    visit.clear();
    dis.clear();
    q.push(s);
    visit[s]=1;
    dis[s]=0;
    while(q.empty())
    {
        string u=q.front();
        int l=a[u].size();
        for(i=0;i<l;i++)
        {
            string v=a[u][i];
            if(!visit[v])
            {
                visit[v]=1;
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
        q.pop();
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        string x,y;
        cin>>x>>y;
        a[x]=y;
        a[y]=x;
    }
    string s;
    cin>>s;
    cout<<dis[s]<<endl;
}
