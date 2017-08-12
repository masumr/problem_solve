#include<bits/stdc++.h>
using namespace std;
string s[32];
int vis[33][80];
int dx[]={1,-1,0,0};
int dy[]={0,0,-1,1};
void bfs(int i,int j){
    cout<<1<<endl;
    queue<pair<int,int> >q;
    vis[i][j]=1;
    s[i][j]='#';
    q.push(make_pair(i,j));
    while(!q.empty()){
        pair<int,int> u=q.front();q.pop();
        cout<<u.first<<' '<<u.second<<endl;
        for(int i=0;i<4;i++){
            int tx=dx[i]+u.first;
            int ty=dy[i]+u.second;
            if(!vis[tx][ty] && s[tx][ty]!='X'){
                s[tx][ty]='#';
                vis[tx][ty]=1;
                q.push(make_pair(tx,ty));
            }
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        int k=0;
        string ss;
        while(getline(cin,ss)){
            s[k++]=ss;
            if(ss[0]=='_')break;
        }
        int i1,i2;
        bool ck=0;
        memset(vis,0,sizeof vis);
        for(int i=0;i<k;i++){
            string ss=s[i];
            if(ck)break;
            for(int j=0;j<ss.size();j++){
                if(ss[j]=='*'){
                    bfs(i,j);
                    ck=1;
                    break;
                }
            }
        }
        for(int i=0;i<k;i++){
            cout<<s[i]<<endl;
        }

    }
}
