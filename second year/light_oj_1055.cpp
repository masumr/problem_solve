#include<bits/stdc++.h>
using namespace std;
const int N=12;
int dx[]={1,-1,0,0};
int dy[]={0,0,-1,1};
char ch[N][N];
int vis[N][N];
int dis1[N][N],dis2[N][N],dis3[N][N];
int n;
void bfs1(int a,int b){
    memset(vis,0,sizeof vis);
    memset(dis1,-1,sizeof dis1);
    queue<pair<int,int> >q;
    q.push(make_pair(a,b));
    vis[a][b]=1;
    dis1[a][b]=0;
    while(!q.empty()){
        pair<int,int>top=q.front();q.pop();
        for(int i=0;i<4;i++){
            int tx=dx[i]+top.first;
            int ty=dy[i]+top.second;
            if((tx>=0 && tx<n) &&(ty>=0 && ty<n) && (ch[tx][ty]!='#' && !vis[tx][ty])){
                q.push(make_pair(tx,ty));
                dis1[tx][ty]=dis1[top.first][top.second]+1;
                vis[tx][ty]=1;
            }
        }
    }
}
void bfs2(int a,int b){
    memset(vis,0,sizeof vis);
    memset(dis2,-1,sizeof dis2);
    queue<pair<int,int> >q;
    q.push(make_pair(a,b));
    vis[a][b]=1;
    dis2[a][b]=0;
    while(!q.empty()){
        pair<int,int>top=q.front();q.pop();
        for(int i=0;i<4;i++){
            int tx=dx[i]+top.first;
            int ty=dy[i]+top.second;
            if((tx>=0 && tx<n) &&(ty>=0 && ty<n) && (ch[tx][ty]!='#' && !vis[tx][ty])){
                q.push(make_pair(tx,ty));
                dis2[tx][ty]=dis2[top.first][top.second]+1;
                vis[tx][ty]=1;
            }
        }
    }
}
void bfs3(int a,int b){
    memset(vis,0,sizeof vis);
    memset(dis3,-1,sizeof dis3);
    queue<pair<int,int> >q;
    q.push(make_pair(a,b));
    vis[a][b]=1;
    dis3[a][b]=0;
    while(!q.empty()){
        pair<int,int>top=q.front();q.pop();
        for(int i=0;i<4;i++){
            int tx=dx[i]+top.first;
            int ty=dy[i]+top.second;
            if((tx>=0 && tx<n) &&(ty>=0 && ty<n) && (ch[tx][ty]!='#' && !vis[tx][ty])){
                q.push(make_pair(tx,ty));
                dis3[tx][ty]=dis3[top.first][top.second]+1;
                vis[tx][ty]=1;
            }
        }
    }
}
bool cheack(int l1,int r1,int l2,int r2,int l3,int r3){
    if(dis1[l1][r1]!=-1 && dis2[l2][r2]!=-1 && dis3[l3][r3]!=-1)return true;
    else return false;
}
int max_val(int l1,int r1,int l2,int r2,int l3,int r3){
    int mx=0;
    //cout<<dis1[l1][r1]<<' '<<dis2[l2][r2]<<' '<<dis3[l3][r3]<<endl;
    //cout<<ch[l1][r1]<<' '<<ch[l2][r2]<<' '<<ch[l3][r3]<<endl;
    mx=max(mx,dis1[l1][r1]);
    mx=max(mx,dis2[l2][r2]);
    mx=max(mx,dis3[l3][r3]);
    //cout<<mx<<endl<<endl;
    return mx;
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    string s="ABC";
        map<char,int>mp;
        mp['A']=0;
        mp['B']=1;
        mp['C']=2;
    while(t--){

          scanf("%d",&n);
          getchar();
          int l1,l2,l3,r1,r2,r3;
          vector<pair<int,int> >v,pc;
          for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%c",&ch[i][j]);
                if(ch[i][j]=='X')v.push_back(make_pair(i,j));
                else if(ch[i][j]=='A')pc.push_back(make_pair(i,j));
                else if(ch[i][j]=='B')pc.push_back(make_pair(i,j));
                else if(ch[i][j]=='C')pc.push_back(make_pair(i,j));
            }
            getchar();
          }
        bfs1(v[0].first,v[0].second);
        bfs2(v[1].first,v[1].second);
        bfs3(v[2].first,v[2].second);
        bool ck=0;
        int mx=0;
        vector<int>ll;
        while(next_permutation(s.begin(),s.end())){
            int i1=mp[s[0]],i2=mp[s[1]],i3=mp[s[2]];
            mx=0;
            if(cheack(pc[i1].first,pc[i1].second,pc[i2].first,pc[i2].second,pc[i3].first,pc[i3].second)){             mx=max_val(pc[i1].first,pc[i1].second,pc[i2].first,pc[i2].second,pc[i3].first,pc[i3].second);
                //cout<<mx<<' ';
                ll.push_back(mx);
                ck=1;
            }
        }
        if(cheack(pc[0].first,pc[0].second,pc[1].first,pc[1].second,pc[2].first,pc[2].second)){
            ck=1;
            mx=max_val(pc[0].first,pc[0].second,pc[1].first,pc[1].second,pc[2].first,pc[2].second);
            //cout<<mx<<' ';
            ll.push_back(mx);
        }
        printf("Case %d: ",++c);
        if(!ck)printf("trapped\n");
        else{
            sort(ll.begin(),ll.end());
            //for(int i=0;i<ll.size();i++)cout<<ll[i]<<' ';
            //cout<<endl;
            printf("%d\n",ll[0]);
        }
        v.clear();pc.clear();ll.clear();

    }
}
