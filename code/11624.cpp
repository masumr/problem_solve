#include<bits/stdc++.h>
using namespace std;
const int N=1007;
int vis[N][N];
int dis1[N][N],dis2[N][N];
int n,m;
int dx[]= {1,-1,0,0};
int dy[]= {0,0,-1,1};
char ch[N][N];
void bfs1(int a,int b)
{
    queue<pair<int,int> >q;
    memset(dis1,-1,sizeof dis1);
    memset(vis,0,sizeof vis);
    q.push(make_pair(a,b));
    dis1[a][b]=0;
    vis[a][b]=1;
    while(!q.empty())
    {
        pair<int,int> u=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int tx=dx[i]+u.first;
            int ty=dy[i]+u.second;
            if((tx>=1 &&  tx<=n) &&(ty>=1 && ty<=m)&&(!vis[tx][ty]))
            {
                if(ch[tx][ty]!='#')
                {
                    dis1[tx][ty]=dis1[u.first][u.second]+1;
                    q.push(make_pair(tx,ty));
                    vis[tx][ty]=1;
                }
            }
        }
    }
}
int inf=1234567;
void bfs2(int a,int b)
{
    queue<pair<int,int> >q;
    memset(vis,0,sizeof vis);
    q.push(make_pair(a,b));
    dis2[a][b]=0;
    vis[a][b]=1;
    while(!q.empty())
    {
        pair<int,int> u=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int tx=dx[i]+u.first;
            int ty=dy[i]+u.second;
            if((tx>=1 &&  tx<=n) &&(ty>=1 && ty<=m)&&(!vis[tx][ty]))
            {
                if(ch[tx][ty]!='#' && dis2[u.first][u.second]+1<dis2[tx][ty])
                {
                    dis2[tx][ty]=dis2[u.first][u.second]+1;
                    q.push(make_pair(tx,ty));
                    vis[tx][ty]=1;
                }
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        getchar();
        int j1,j2;
        vector<pair<int,int> >f1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                scanf("%c",&ch[i][j]);
                if(ch[i][j]=='J')
                {
                    j1=i;
                    j2=j;
                }
                if(ch[i][j]=='F')
                {
                    f1.push_back(make_pair(i,j));
                }
            }
            getchar();
        }
        bfs1(j1,j2);
        for(int i=0;i<=n;i++)for(int j=0;j<=m;j++)dis2[i][j]=inf;
        for(int i=0;i<f1.size();i++){
            bfs2(f1[i].first,f1[i].second);
        }
        int mn=1234566;
        int mx=mn;
        for(int i=1; i<=n; i++)
        {
            if(dis1[i][1]!=-1)
            {
                if(dis1[i][1]<dis2[i][1])
                {
                    mn=min(mn,dis1[i][1]);
                }
            }
            //cout<<i<<' '<<1<<' '<<dis1[i][1]<<' '<<dis2[i][1]<<' '<<mn<<endl;
            if(dis1[i][m]!=-1)
            {
                if(dis1[i][m]<dis2[i][m])mn=min(mn,dis1[i][m]);
            }
            //cout<<i<<' '<<m<<' '<<dis1[i][m]<<' '<<dis2[i][m]<<' '<<mn<<endl;
        }
        for(int i=1; i<=m; i++)
        {
            if(dis1[1][i]!=-1)
            {
                if(dis1[1][i]<dis2[1][i])mn=min(mn,dis1[1][i]);
            }
            //cout<<1<<' '<<i<<' '<<dis1[1][i]<<' '<<dis2[1][i]<<' '<<mn<<endl;
            if(dis1[n][i]!=-1)
            {
                if(dis1[n][i]<dis2[n][i])mn=min(mn,dis1[n][i]);
            }
            //cout<<n<<' '<<i<<' '<<dis1[n][i]<<' '<<dis2[n][i]<<' '<<mn<<endl;
        }
        if(mx==mn)printf("IMPOSSIBLE\n");
        else printf("%d\n",mn+1);
        f1.clear();
    }
}
