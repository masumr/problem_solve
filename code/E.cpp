#include<bits/stdc++.h>
using namespace std;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
char a[15][15];
int x,y;
//map<char,pair<int,int> >mp;
int visited[15][15],dis[15][15];
void bfs(int s1,int s2,char c){
    memset(visited,0,sizeof visited);
    memset(dis,-1,sizeof dis);
    visited[s1][s2]=1;
    queue<pair<int,int> >q;
    dis[s1][s2]=0;
    q.push(make_pair(s1,s2));
    while(!q.empty()){
        pair<int,int> top=q.front();q.pop();
        int ui=top.first;
        int uj=top.second;
        for(int i=0;i<4;i++){
            int vi=ui+fx[i];
            int vj=uj+fy[i];
            if((vi>=1 && vi<=x) && (vj>=1 && vj<=y) && (a[vi][vj]=='.'|| a[vi][vj]==c)){
                if(!visited[vi][vj]){
                    //cout<<vi<<' '<<vj<<endl;
                    q.push(make_pair(vi,vj));
                    visited[vi][vj]=1;
                   //cout<<vi<<' '<<vj<<endl;
                    dis[vi][vj]=dis[ui][uj]+1;
                }
            }
        }
    }

}
int main(){
    int t,c=0;
    scanf("%d",&t);
    int x1,x2,x3,y1,y2,y3;
    int a1[27],b1[27];
    int ss=0;
    while(t--){
        int n;
        scanf("%d",&n);
        x=y=n;
        int ss=0;
        //getchar();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                //scanf("%c",&a[i][j]);
                cin>>a[i][j];
                if(a[i][j]>='A' && a[i][j]<='Z'){
                    a1[(int)a[i][j]-'A']=i;
                    b1[(int)a[i][j]-'A']=j;
                    //cout<<i<<' '<<j<<endl;
                    ss++;
                }
            }
         //   getchar();
        }
        //cout<<ss<<endl;
        printf("Case %d: ",++c);
        int sum=0;
        bool cheack=false;

        for(int i=0;i<ss-1;i++){
            //cout<<a1[i]<<' '<<b1[i]<<endl;
            char c=(char)('A'+i+1);
            bfs(a1[i],b1[i],c);
            a[a1[i]][b1[i]]='.';
            //cout<<a1[i+1]<<' '<<b1[i+1]<<endl;
            //cout<<dis[a1[i+1]][b1[i+1]]<<endl;
            if(dis[a1[i+1]][b1[i+1]]==-1){
                cheack=true;
                break;
            }
            sum+=dis[a1[i+1]][b1[i+1]];

        }
        if(!cheack)printf("%d\n",sum);
        else printf("Impossible\n");
    }
}
