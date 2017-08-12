#include<bits/stdc++.h>
using namespace std;
int fx[]={1,-1,0,0};
int fy[]={0,0,-1,1};
char a[503][503];
int n=0,x,y;
int visited[503][503],dis[503][503];
int dp[503][503];
int bfs(int s1,int s2){
    memset(visited,0,sizeof visited);
    //memset(visited,0,sizeof visited);
    visited[s1][s2]=1;
    queue<int>q;
    q.push(s1);
    q.push(s2);
    int count=0;
    if(a[s1][s2]=='C'){
        count++;
    }
    while(!q.empty()){
        int ui=q.front();q.pop();
        int uj=q.front();q.pop();
        for(int i=0;i<4;i++){
            int vi=ui+fx[i];
            int vj=uj+fy[i];
            if((vi>=1 && vi<=x) && (vj>=1 && vj<=y) && (a[vi][vj]!='#')){
                if(!visited[vi][vj]){
                    if(a[vi][vj]=='C'){
                        //cout<<a[vi][vj]<<endl;
                        count++;
                    }
                    q.push(vi);
                    q.push(vj);
                    visited[vi][vj]=1;
                }
            }
        }
    }
    for(int i=1;i<=x;i++)for(int j=1;j<=y;j++){
        if(visited[i][j]==1)
        {
            //cout<<i<<' '<<j<<endl;
            dis[i][j]=count;
        }
    }
    return count;
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int z;
        scanf("%d%d%d",&x,&y,&z);
        getchar();
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++)
            {
                scanf("%c",&a[i][j]);
            }
            getchar();
        }
        int n1,n2;
        printf("Case %d:\n",++c);
        memset(dis,-1,sizeof dis);
        memset(visited,0,sizeof visited);
        while(z--){
            scanf("%d%d",&n1,&n2);
            //cout<<a[n1][n2]<<endl;
            if(a[n1][n2]=='#')printf("0\n");
            else if(dis[n1][n2]!=-1){
                    //cout<<1<<endl;
                    printf("%d\n",dis[n1][n2]);
            }
            else {
                printf("%d\n",bfs(n1,n2));
            }
        }
    }
}
