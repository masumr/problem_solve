#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
char c[11][11];
bool vis[11][11];
int res[11][11];
int res2[11][11];
int dx[] ={ 1, 1, 2, 2, -1, -1, -2, -2 };
int dy[] ={ 2, -2, 1, -1, 2, -2, 1, -1 };
int n, m;
void bfs(int x, int y, int k){
    memset(vis,0,sizeof vis);
    queue<pair<pii,pii> > q;
    q.push(make_pair(make_pair(x,y),make_pair(1,0)));
    vis[x][y] = 1;
    res2[x][y]++;
    while (!q.empty()){
        pair<pii, pii> r = q.front(); q.pop();
        for(int i=0;i<8;i++){
            int nx = r.first.first + dx[i];
            int ny = r.first.second + dy[i];
            if((nx>=1 && nx<=n) && (ny>=1 && ny<=m)&& !vis[nx][ny]){
                if(r.second.second == k)
                    q.push(make_pair(make_pair(nx, ny), make_pair(r.second.first + 1, k)));
                else
                    q.push(make_pair(make_pair(nx, ny), make_pair(r.second.first, r.second.second + 1)));
                vis[nx][ny] = 1;
                res[nx][ny] += r.second.first  + (r.second.second == k);
                res2[nx][ny] ++;
            }
        }
    }
}
int main() {
    int t,cc=0;
    scanf("%d",&t);
    while (t--){
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin >> c[i][j];
        memset(res,0,sizeof res);
        memset(res2,0,sizeof res2);
        int x = 0;
        for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)if (c[i][j] != '.'){
            x++;
            bfs(i, j, (int)c[i][j] - '0');
        }
        int ans =INT_MAX;
        for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)if(res2[i][j] == x) ans = min(ans, res[i][j]);
        printf("Case %d: %d\n",++cc,((ans==INT_MAX)?-1:ans));
    }
}
