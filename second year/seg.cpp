#include<bits/stdc++.h>
using namespace std;
int INF=10000000;
const int SIZE=100000;
int T[4*SIZE];

void update(int node, int s, int e, int id, int value)
{
	if(id < s || id > e || s > e) return;
    if(s == e) T[node] = value;
    else
    {
	    update( node*2,s,(s+e)/2,id,value );
	    update( node*2+1,(s+e)/2+1,e,id,value );

	    T[node] = min(T[node*2], T[node*2+1]);
    }
}


int query(int node, int s, int e, int S, int E){
    if( s > E || e < S || s > e ) return INF;
    if( s >= S && e <= E ) return T[node];
    return min(query(node*2, s, (s+e)/2, S, E), query(node*2+1, (s+e)/2+1, e, S, E));
}

int main()
{

	unsigned i, j, k, l, sum = 0;
	int tc, t, d, x, y, r, n, m, p, q, value;
	int x1, y1, x2, y2;

	scanf("%d", &tc);
	getchar();

	for(t = 1; t <= tc; t++)
	{
		scanf("%d %d", &n, &q);
		printf("Case %d:\n", t);
		for(int i = 0;i<n;++i)
		{
            scanf("%d", &value);
            update( 1,0,n-1,i,value );
        }

        for(int i = 0; i < q; i++)
        {
	        scanf("%d %d", &j, &k);
	        printf("%d\n", query(1, 0, n - 1, --j, --k));
        }
	}

	return 0;
}

