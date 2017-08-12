#include<bits/stdc++.h>
using namespace std;
int dx[]= {1,-1,0,0};
int dy[]= {0,0,1,-1};
char a[17][17];
int vis[17][17];
int r,c;
int bfs(int i,int j,char ch)
{
    queue<pair<int,int> >q;
    vis[i][j]=1;
    q.push(make_pair(i,j));
    int count=1;
    while(!q.empty())
    {
        pair<int,int>ss=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int tx=dx[i]+ss.first;
            int ty=dy[i]+ss.second;
            if((tx>0 && tx<=r) &&(ty>0 && ty<=c))
            {
                if(!vis[tx][ty] && a[tx][ty]==ch)
                {
                    count++;
                   // cout<<tx<<' '<<ty<<endl;
                    q.push(make_pair(tx,ty));
                    vis[tx][ty]=1;
                }
            }
        }
    }
    return count;
}
int main()
{
    scanf("%d%d",&c,&r);
    bool ck=0;
    for(int i=1; i<=r; i++)for(int j=1; j<=c; j++)cin>>a[i][j];
    int c1=0,c2=0,m1=0,m2=0;
    memset(vis,0,sizeof vis);
    for(int i=1; i<=r; i++)for(int j=1; j<=c; j++)
        {
            if(a[i][j]=='*' && !vis[i][j])
            {
                m1=max(m1,bfs(i,j,a[i][j]));
                //cout<<i<<' '<<j<<' '<<m1<<endl;
            }
            else if(a[i][j]=='.' && !vis[i][j])
            {
                m2=max(m2,bfs(i,j,a[i][j]));
                //cout<<1<<' '<<i<<' '<<j<<' '<<m2<<endl;
            }
        }
    if(m1>m2)cout<<"TULTUL WINS THE ROUND."<<endl;
    else if(m1<m2)cout<<"TASFIA WINS THE ROUND."<<endl;
    else cout<<"NOBODY LOSES."<<endl;
}
