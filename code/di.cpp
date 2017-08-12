#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m;
ll dist[1000005], par[1000005];
vector < ll > V[1000005],cost[1000005];
stack < ll > st;
struct node
{
    ll s,  w;
    node(ll a, ll b)
    {
        s = a;
        w = b;
    }
    bool operator < (const node &p ) const
    {
        return w > p.w;
    }
};

int dijkstra()
{
    for( ll i = 0; i <= n + 10; i++) par[i] = -1;

    for( ll i = 0; i <= n + 10; i++) dist[i] = 10000000000000;

    dist[1] = 0;


    priority_queue < node > pq;
    pq.push(node(1, 0) );
    while( !pq.empty() )
    {
        node top = pq.top();
        pq.pop();
        ll u = top.s;
        ll cc = top.w;
        for( ll i = 0; i < V[u].size(); i++)
        {
            ll x = V[u][i];


            if( dist[x] > dist[u] + cost[u][i] )
            {
                dist[x] = dist[u] + cost[u][i];
                pq.push(node( x, dist[x] ) );
                par[x] = u;
            }

        }


    }

}

int main()
{
    cin >>n >> m;

    for( ll i = 1; i <= m; i++ )
    {
        ll a, b, c;
        cin >> a >> b >> c;
        V[a].push_back(b);
        V[b].push_back(a);
        cost[a].push_back(c);
        cost[b].push_back(c);

    }

    dijkstra();
    if( dist[n] == 10000000000000)
    {
        cout << "-1\n";
        return 0;
    }

    int ck = n;

    while( ck != -1 )
    {
        st.push(ck);
        ck = par[ck];
    }

    while( !st.empty() )
    {
        cout << st.top() << " ";
        st.pop();
    }


}
