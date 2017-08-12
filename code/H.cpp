#include<bits/stdc++.h>
using namespace std;
int fx[]= {1,-1,0,0};
int fy[]= {0,0,1,-1};
char a[202][202];
int x,y;
int vis1[202][202],dis1[202][202];
int vis[202][202],dis[202][202];
int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        queue<pair<int,int> >q;
        int c1=0,c2=0;
        int x1,y1,x2,y2;
        memset(vis,0,sizeof vis);
        memset(dis,-1,sizeof dis);
        scanf("%d%d",&x,&y);
        for(int i=1; i<=x; i++)
        {
            for(int j=1; j<=y; j++)
            {
                scanf("%c",&a[i][j]);
                if(a[i][j]=='F')
                {
                    q.push(make_pair(i,j));
                    dis[i][j]=0;
                    c1=1;
                }
                if(a[i][j]=='J' &&!c2)
                {
                    x2=i;
                    y2=j;
                    c2++;
                }
            }
            getchar();
        }
        if(c1){
            vis[x1][y1]=1;
            dis[x1][y1]=0;
            q.push(make_pair(x1,y1));
            while(!q.empty())
            {
                pair<int,int> top=q.front();
                q.pop();
                int ui=top.first;
                int uj=top.second;
                for(int i=0; i<4; i++)
                {
                    int vi=ui+fx[i];
                    int vj=uj+fy[i];
                    if((vi>=1 && vi<=x) && (vj>=1 && vj<=y) && (a[vi][vj]!='#')&& (a[vi][vj]!='J'))
                    {
                        if(!vis[vi][vj])
                        {
                            q.push(make_pair(vi,vj));
                            vis[vi][vj]=1;
                            // cout<<vi<<' '<<vj<<endl;
                            dis[vi][vj]=dis[ui][uj]+1;
                        }
                    }
                }
            }
        }
        if(c2){
            memset(vis1,0,sizeof vis);
            memset(dis1,-1,sizeof dis);
            vis1[x2][y2]=1;
            //queue<pair<int,int> >q;
            dis1[x2][y2]=0;
            q.push(make_pair(x2,y2));
            while(!q.empty())
            {
                pair<int,int> top=q.front();
                q.pop();
                int ui=top.first;
                int uj=top.second;
                for(int i=0; i<4; i++)
                {
                    int vi=ui+fx[i];
                    int vj=uj+fy[i];
                    if((vi>=1 && vi<=x) && (vj>=1 && vj<=y) && (a[vi][vj]!='#')&& (a[vi][vj]!='F'))
                    {
                        if(!vis1[vi][vj])
                        {
                            q.push(make_pair(vi,vj));
                            vis1[vi][vj]=1;
                            // cout<<vi<<' '<<vj<<endl;
                            dis1[vi][vj]=dis[ui][uj]+1;
                        }
                    }
                }
            }
        }
        cout<<1<<endl;
        int count=100000000;
        bool cheack=false;
        for(int i=1; i<=x; i++)
        {
            if(dis[i][1]>=dis1[i][1] && dis[i][1]!=-1 && dis1[i][1]!=-1)
            {
                count=min(count,dis1[i][1]);
                cheack=true;
            }
            if(dis[i][y]>=dis1[i][y] && dis[i][y]!=-1 && dis1[i][y]!=-1)
            {
                count=min(count,dis1[i][y]);
                cheack=true;
            }
        }
        for(int i=1; i<=y; i++)
        {
            //cout<<dis[i][1]<<' '<<dis1[i][1]<<' '<<dis[i][x]<<' '<<dis[i][x]<<endl;
            if(dis[i][1]>=dis1[i][1] && dis[i][1]!=-1 && dis1[i][1]!=-1)
            {
                count=min(count,dis1[i][1]);
                cheack=true;
            }
            if(dis[i][x]>=dis1[i][x] && dis[i][x]!=-1 && dis1[i][x]!=-1)
            {
                count=min(count,dis1[i][y]);
                cheack=true;
            }
        }
        printf("Case %d: ",++c);
        if(cheack)printf("%d\n",count+1);
        else printf("IMPOSSIBLE\n");
    }
}
