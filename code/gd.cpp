#include<bits/stdc++.h>
using namespace std;
const int INF=INT_MAX;
int fx[]= {1,-1,0,0};
int fy[]= {0,0,1,-1};
char a[202][202];
int x,y;
int vis1[202][202],dis1[202][202];
int vis[202][202],dis[202][202];
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int x1,y1,x2,y2;
        scanf("%d%d",&x,&y);
        int c1=0;
         memset(vis,0,sizeof vis);
         queue<pair<int,int> >q;
         getchar();
        for(int i=1; i<=x; i++){
            for(int j=1; j<=y; j++){
                scanf("%c",&a[i][j]);
                dis[i][j]=dis1[i][j]=INF;
                if(a[i][j]=='F'){
                    q.push(make_pair(i,j));
                    vis[i][j]=1;
                    dis[i][j]=0;
                    c1=1;
                }
                if(a[i][j]=='J'){x2=i;y2=j;}
            }
            getchar();
        }
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
                if((vi>=1 && vi<=x) && (vj>=1 && vj<=y) && (a[vi][vj]=='.'))
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
        memset(vis1,0,sizeof vis);
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
                if((vi>=1 && vi<=x) && (vj>=1 && vj<=y) && (a[vi][vj]=='.'))
                {
                    if(!vis1[vi][vj])
                    {
                         //cout<<vi<<' '<<vj<<' '<<a[vi][vj]<<endl;
                        q.push(make_pair(vi,vj));
                        vis1[vi][vj]=1;
                        // cout<<vi<<' '<<vj<<endl;
                        dis1[vi][vj]=dis1[ui][uj]+1;
                        //cout<<dis1[vi][vj]<<endl;
                    }
                }
            }
        }
        int count=INF;
        //int count1=100000000;
        bool cheack=false;
        for(int i=1;i<=x;i++){
            //cout<<dis[i][1]<<' '<<dis1[i][1]<<' '<<dis[i][y]<<' '<<dis1[i][y]<<endl;
            if(dis[i][1]>dis1[i][1]){
                cout<<1<<endl;
                count=min(count,dis1[i][1]);
            }
            if(dis[i][y]>dis1[i][y]){
                cout<<1<<endl;
                count=min(count,dis1[i][y]);
                //cheack=true;
            }
        }
        for(int i=1;i<=y;i++){
            //cout<<dis[1][i]<<' '<<dis1[1][i]<<' '<<dis[x][i]<<' '<<dis1[x][i]<<endl;
            //cout<<dis[i][1]<<' '<<dis[i][y]<<endl;
            //cout<<i<< ' ';
            //if(dis1[1][i]!=-1)count1=min(count1,dis1[1][i]);
            //cout<<dis[i][1]<<' '<<dis1[i][1]<<' '<<dis[i][x]<<' '<<dis[i][x]<<endl;
            if(dis[1][i]>dis1[1][i]){
                cout<<1<<endl;
                count=min(count,dis1[1][i]);
                //cheack=true;
            }
            //if(dis1[x][i]!=-1)count1=min(count1,dis1[x][i]);
            if(dis[x][i]>dis1[x][i]){
                cout<<1<<endl;
                count=min(count,dis1[x][i]);
               // cheack=true;
            }
        }
        //cout<<dis1[3][2]<<endl;
        //cout<<count<<' '<<count1<<endl;
        //count=min(count,count1);
        printf("Case %d: ",++c);
        //cout<<count<<' '<<INF<<endl;
        if(count!=INF)printf("%d\n",count+1);
        else printf("IMPOSSIBLE\n");
    }
}
