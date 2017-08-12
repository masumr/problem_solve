#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

const int MAXN = 1 << 9;
int dist[MAXN], g[MAXN][MAXN];
int n, m, t;
const int inf = 0x3f3f3f3f;
typedef pair<int, int> pii;

void ReadGragh()
{
    for( int i = 0; i < n; i ++)
        for( int j = 0; j < n; j ++)
        {
            if( i != j)
                g[i][j] = inf;
            else
                g[i][j] = 0;
        }
    while( m --)
    {
        int u, v, w;
        scanf( "%d%d%d", &u, &v, &w);
        if( g[u][v] > w)
            g[u][v] = g[v][u] = w;
    }
    scanf( "%d", &t);
}

void Dijkstra()
{
    priority_queue< pii, vector<pii>, greater<pii> > q;
    for( int i = 0; i < n; i ++)
        dist[i] = inf;
    dist[t] = 0;
    q.push( make_pair(0, t));
    while( !q.empty())
    {
        pii u = q.top(); q.pop();
        int x = u.second;
        cout<<dist[x]<<' '<<u.first<<endl;
        if( dist[x] != u.first) continue;
        for( int i = 0; i < n; i ++)
        {
            if( i != x && dist[i] > max(dist[x], g[x][i]) )
            {
                dist[i] = max(dist[x], g[x][i]);
                q.push( make_pair(dist[i], i));
            }
        }
    }
}

int main()
{
    int T, cas;
    scanf( "%d", &T);
    for( cas = 1; cas <= T; cas ++)
    {
        scanf( "%d%d", &n, &m);
        ReadGragh();
        Dijkstra();
        printf( "Case %d:\n", cas);
        for( int i = 0; i < n; i ++)
        {
            if( dist[i] == inf)
                printf( "Impossible\n");
            else
                printf( "%d\n", dist[i]);
        }
    }
    return 0;
}
