#pragma region include

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<sstream>
#include<queue>
#include<math.h>
#include<stdlib.h>
#include<stack>
#include<string.h>
#include<string>
#include<map>
#include<algorithm>
#include<time.h>
#include<set>
#include<vector>
#include<numeric>
#include<iomanip>
#include <bitset>
#include <functional>
using namespace std;

#pragma endregion

#define All(a) a.begin(), a.end()
#define rep(i,n) for(int i=0;i<int(n);i++)
#define repd(i,n) for(int i=n-1;i>=0;i--)
#define repi(i,a,n) for(int i=int(a);i<int(n);i++)
#define clr(a, n) memset(a, n, sizeof(a));
#define scn(a,n) rep(i,n) cin>>a[i];
#define scn2(a,row,col) rep(i,row) rep(j,col) cin>>a[i][j];
#define prn(a,n) rep(i,n-1) cout<<a[i]<<" "; cout<<a[n-1]<<endl;
#define prn2(a,row,col) rep(i,row){rep(j,col-1) cout<<a[i][j]<<" "; cout<<a[i][col-1]<<endl;}
#define mp make_pair
#define Odd(x) x%2!=0
#define Even(x) x%2==0
#define Pi 3.14
#define INF 2000000000 // 2 billion
#define read freopen("in.in","r",stdin)
#define write freopen("out.out","w",stdout)

typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi > vivi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<string> vs;
typedef pair<string, int> is;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


char c[11][11];
bool vis[11][11];
int res[11][11];
int res2[11][11];
int dx[8] = { 1, 1, 2, 2, -1, -1, -2, -2 };
int dy[8] = { 2, -2, 1, -1, 2, -2, 1, -1 };
int n, m;


bool in_range(int i, int j){
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(int x, int y, int k){
    clr(vis, 0);
    queue<pair<pii,pii> > q;
    q.push(mp(mp(x,y), mp(1,0)));
    vis[x][y] = 1;
    res2[x][y]++;
    while (!q.empty()){
        pair<pii, pii> r = q.front(); q.pop();
        rep(i, 8){
            int nx = r.first.first + dx[i];
            int ny = r.first.second + dy[i];
            if (in_range(nx, ny) && !vis[nx][ny]){
                if (r.second.second == k)
                    q.push(mp(mp(nx, ny), mp(r.second.first + 1, k)));
                else
                    q.push(mp(mp(nx, ny), mp(r.second.first, r.second.second + 1)));
                vis[nx][ny] = 1;
                res[nx][ny] += r.second.first  + (r.second.second == k);
                res2[nx][ny] ++;
            }
        }
    }
    //return -1;
}


int main() {
    int t,k=1; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        rep(i, n) rep(j, m) cin >> c[i][j];
        clr(res, 0); clr(res2, 0);
        int x = 0;
        rep(i, n)
            rep(j, m){
                if (c[i][j] != '.'){
                    x++;
                    bfs(i, j, c[i][j] - '0');
                }
            }
        int ans = 1000;
        rep(i, n){
            rep(j, m){
                if(res2[i][j] == x) ans = min(ans, res[i][j]);
            }
        }
        ans = ans == 1000 ? -1 : ans;
        cout << "Case " << k++ << ": " << ans << endl;
    }
    return 0;
}
