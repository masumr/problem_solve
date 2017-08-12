#include<bits/stdc++.h>
using namespace std;
const int N=40;
int dis[N][N];
int dis1[N][N];
map<char,int>ms;
map<int,char>mk;
struct node
{
    int u,w;
    bool operator<(const node& p)const
    {
        return w<p.w;
    }
};
int inf=1234567;
int cnt;
/*void dij1(int s)
{
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
            pair<int,int>p;
            int v=ed[u][i];
            p.first=u;
            p.second=v;
            int vcost=ucost+cost[u][i];
            //cout<<mp[p]<<' '<<' '<<u<<' '<<v<<' '<<vcost<<endl;;
            if(vcost<dis[v] && mp[p]=='Y')
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
void dij2(int s)
{
    //cout<<s<<endl;
    priority_queue<node>pq;
    dis1[s]=0;
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
            pair<int,int>p;
            int v=ed[u][i];
            p.first=u;
            p.second=v;
            int vcost=ucost+cost[u][i];
            //cout<<mp[p]<<' '<<' '<<u<<' '<<v<<endl;;
            if(vcost<dis1[v] && mp[p]=='M')
            {
                dis1[v]=vcost;
                node np;
                np.u=v;
                np.w=vcost;
                pq.push(np);
            }
        }
    }

}*/
int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {
        cnt=1;
        for(int i=1; i<N; i++){
            for(int j=1;j<N;j++){
            dis[i][j]=inf;
            dis1[i][j]=inf;
            }
        }
        for(int i=0; i<n; i++)
        {
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
            if(a=='Y'){
                dis[ms[c]][ms[d]]=len;
                if(b=='B')dis[ms[d]][ms[c]]=len;
            }
            else{
                dis1[ms[c]][ms[d]]=len;
                if(b=='B')dis1[ms[d]][ms[c]]=len;
            }
        }
        //cout<<"mas"<<endl;
        for(int i=1;i<=cnt;i++){
            dis[i][i]=0;
            dis1[i][i]=0;
        }
        int mx=inf;
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
            for(int i=1;i<=cnt;i++)for(int j=1;j<=cnt;j++)for(int k=1;k<=cnt;k++)dis[j][k]=min(dis[j][k],dis[j][i]+dis[i][k]);
        for(int i=1;i<=cnt;i++)for(int j=1;j<=cnt;j++)for(int k=1;k<=cnt;k++)dis1[j][k]=min(dis1[j][k],dis1[j][i]+dis1[i][k]);
        for(int i=1;i<=cnt;i++){
            int i1=ms[a],i2=ms[b];
            //cout<<i1<<' '<<i2<<' '<<i<<' '<<dis[i1][i]<<' '<<dis1[i2][i]<<endl;
            if(dis[i1][i]!=inf && dis1[i2][i]!=inf){
                mx=min(mx,dis[i1][i]+dis1[i2][i]);
            }
        }
         if(mx==inf)printf("You will never meet.\n");
        else {
            set<char>ss;
            for(int i=1;i<=cnt;i++){
                if(dis[ms[a]][i]+dis1[ms[b]][i]==mx)ss.insert(mk[i]);
            }
            printf("%d",mx);
            for(set<char>::iterator it=ss.begin();it!=ss.end();it++){
                printf(" %c",*it);
            }
            printf("\n");
            ss.clear();
        }
        //cout<<a<<' '<<ms[a]<<' '<<b<<' '<<ms[b]<<endl;
        //cout<<ms[a]<<' '<<ms[b]<<endl;
        mk.clear();
        ms.clear();
    }
}

