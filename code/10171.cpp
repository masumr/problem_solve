#include<bits/stdc++.h>
using namespace std;
const int N=40;
int dis[N];
int dis1[N];
map<char,int>ms;
map<int,char>mk;
vector<int>ed[N],cost[N];
vector<int>ed1[N],cost1[N];
struct node
{
    int u,w;
    bool operator<(const node& p)const
    {
        return w>p.w;
    }
};
int inf=1234567;
int cnt;
void dij1(int s){
    //cout<<s<<endl;
    priority_queue<node>pq;
    dis[s]=0;
    node nd;
    nd.u=s;
    nd.w=0;
    pq.push(nd);
    while(!pq.empty())
    {
        nd=pq.top();
        pq.pop();
        int u=nd.u;
        int ucost=nd.w;
        for(int i=0; i<ed[u].size(); i++)
        {
            int v=ed[u][i];
            int vcost=ucost+cost[u][i];
            //cout<<mp[p]<<' '<<' '<<u<<' '<<v<<' '<<vcost<<endl;;
            if(vcost<dis[v])
            {
                dis[v]=vcost;
                node np;
                np.u=v;
                np.w=vcost;
                pq.push(np);
            }
        }
    }

}
void dij2(int s){
    //cout<<s<<endl;
    priority_queue<node>pq;
    dis1[s]=0;
    node nd;
    nd.u=s;
    nd.w=0;
    pq.push(nd);
    while(!pq.empty()){
        //cout<<"mas"<<endl;
        nd=pq.top();
        pq.pop();
        int u=nd.u;
        int ucost=nd.w;
        //cout<<u<<' '<<ed1[u].size()<<endl;
        for(int i=0; i<ed1[u].size(); i++){
            //cout<<ed1[u][i]<<' ';
            int v=ed1[u][i];
            int vcost=ucost+cost1[u][i];
            //cout<<mp[p]<<' '<<' '<<u<<' '<<v<<endl;;
            if(vcost<dis1[v]){
                dis1[v]=vcost;
                node np;
                np.u=v;
                np.w=vcost;
                pq.push(np);
            }
        }
    }

}
int main(){
    int n;
    while(scanf("%d",&n) && n)
    {
        cnt=1;
        for(int i=0; i<n; i++){
            char a,b,c,d;
            int len;
            cin>>a>>b>>c>>d>>len;
            //cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<len<<endl;
            if(!ms[c])
            {
                ms[c]=cnt;
                //cout<<c<<' '<<ms[c]<<' ';
                mk[cnt]=c;
                cnt++;
            }
            if(!ms[d])
            {
                ms[d]=cnt;
                mk[cnt]=d;
                //cout<<d<<' '<<ms[d]<<endl;
                cnt++;
            }
            if(a=='Y')
            {
                ed[ms[c]].push_back(ms[d]);
                cost[ms[c]].push_back(len);
                if(b=='B')
                {
                    ed[ms[d]].push_back(ms[c]);
                    cost[ms[d]].push_back(len);
                }
            }
            else
            {
                ed1[ms[c]].push_back(ms[d]);
                cost1[ms[c]].push_back(len);
                if(b=='B')
                {
                    ed1[ms[d]].push_back(ms[c]);
                    cost1[ms[d]].push_back(len);
                }
            }
        }
        //cout<<"mas"<<endl;
        char a,b;
        cin>>a>>b;
        if(!ms[a])
        {
            ms[a]=cnt;
            //cout<<c<<' '<<ms[c]<<' ';
            mk[cnt]=a;
            cnt++;
        }
        if(!ms[b])
        {
            ms[b]=cnt;
            mk[cnt]=b;
            //cout<<d<<' '<<ms[d]<<endl;
            cnt++;
        }
        for(int i=1; i<=cnt; i++)
        {
            dis[i]=inf;
            dis1[i]=inf;
        }
        //cout<<a<<' '<<ms[a]<<' '<<b<<' '<<ms[b]<<endl;
        //cout<<ms[a]<<' '<<ms[b]<<endl;
        dij1(ms[a]);
        dij2(ms[b]);
        //cout<<"mas"<<endl;
        int mx=inf;
        set<int>ss;
        for(int i=1; i<=cnt; i++)
        {
            ed[i].clear();
            ed1[i].clear();
            cost[i].clear();
            cost1[i].clear();
            //cout<<dis[i]<<' '<<dis1[i]<<endl;
            if(dis[i]!=inf && dis1[i]!=inf)
            {
                int len=dis[i]+dis1[i];
                if(mx>len)
                {
                    mx=len;

                }
            }
        }
        for(int i=1; i<=cnt; i++)
        {
            //ed[i].clear();
            //cost[i].clear();
            //cout<<dis[i]<<' '<<dis1[i]<<endl;
            if(dis[i]!=inf && dis1[i]!=inf)
            {
                int len=dis[i]+dis1[i];
                if(mx==len)
                {
                    ss.insert(i);
                }
            }
        }
        if(mx==inf)printf("You will never meet.\n");
        else
        {
            printf("%d",mx);
            for(set<int>::iterator it=ss.begin(); it!=ss.end(); it++)
            {
                printf(" %c",mk[*it]);
            }
            printf("\n");
            ss.clear();
        }
        mk.clear();
        ms.clear();
    }
}
