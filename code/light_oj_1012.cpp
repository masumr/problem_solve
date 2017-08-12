#include<bits/stdc++.h>
using namespace std;
int fx[]={1,-1,0,0};
int fy[]={0,0,-1,1};
char a[501][501];
int n=0,x,y;
int visited[501][501],dis[501][501];
void bfs(int s1,int s2){
    memset(visited,0,sizeof visited);
    visited[s1][s2]=1;
    queue<int>q;
    q.push(s1);
    q.push(s2);
    while(!q.empty()){
        n++;
        int ui=q.front();q.pop();
        int uj=q.front();q.pop();
        for(int i=0;i<4;i++){
            int vi=ui+fx[i];
            int vj=uj+fy[i];
            if((vi>=1 && vi<=y) && (vj>=1 && vj<=x) && (a[vi][vj]!='#')){
                if(!visited[vi][vj]){
                    q.push(vi);
                    q.push(vj);
                    visited[vi][vj]=1;
                }
            }
        }

    }

}
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int x1,y1;
        cin>>x>>y;
        for(int i=1;i<=y;i++){
            for(int j=1;j<=x;j++){
                cin>>a[i][j];
                if(a[i][j]=='@'){
                    x1=i;
                    y1=j;
                }
            }
        }
        n=0;
        bfs(x1,y1);
        printf("Case %d: %d\n",++c,n);
    }
}
