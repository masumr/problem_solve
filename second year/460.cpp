#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
const int N=101;
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
        vector<pair<int,int> >v;
        int k=1;
        while(getline(cin,s)){
            if(s.size()==0)break;
            if(s[0]>='0' && s[0]<='9'){
                stringstream ss(s);
                int n1,n2;
                ss>>n1;ss>>n2;
                v.push_back(pair<int,int>(n1,n2));
            }
            else{
                c=s.size();
                for(int i=0;i<s.size();i++)ed[k][i+1]=s[i];
                k++;
            }
        }
        r=k;
        for(int i=0;i<v.size();i++){
            memset(vis,0,sizeof vis);
            printf("%d\n",bfs(v[i].first,v[i].second,'W'));
        }
        v.clear();
        if(t)printf("\n");
    }
}
