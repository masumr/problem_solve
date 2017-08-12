#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
const int N=29;
int vis[N][N];
char ed[N][N];
int r,c;
int bfs(int i,int j,char ch){
    //cout<<"mas"<<endl;
    int count=1;
    queue<pair<int,int> >q;
    vis[i][j]=1;
    q.push(pair<int,int>(i,j));
    while(!q.empty()){
        pair<int,int>u=q.front();q.pop();
        for(int i=0;i<8;i++){
            int tx=u.first+dx[i];
            int ty=u.second+dy[i];
            if((tx>=1 && tx<=r) &&(ty>=0 && ty<=c)){
                if(!vis[tx][ty] && ed[tx][ty]==ch){
                    q.push(pair<int,int>(tx,ty));
                    vis[tx][ty]=1;
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--){
        string s;
        int k=1;
        while(getline(cin,s)){
            if(s.size()==0)break;
            c=s.size();
            for(int i=0;i<s.size();i++)ed[k][i+1]=s[i];
            k++;
        }
        r=k;
        memset(vis,0,sizeof vis);
        int mx=0;
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                if(!vis[i][j] && ed[i][j]=='1'){
                    mx=max(mx,bfs(i,j,'1'));
                }
            }
        }
        printf("%d\n",mx);
        if(t)printf("\n");
    }
}
