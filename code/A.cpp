#include<bits/stdc++.h>
using namespace std;
const int nn=20005;
vector<int> adj[nn];
int color[nn];
enum {NOT_VISITED,BLACK,RED};
int main(){
	//int m,x, y, q, value, node;
	int t,c=0;
	scanf("%d",&t);
	while(t--){
        int n;
		scanf("%d", &n);
		memset(color, 0, sizeof color);
		for(int i=0;i<nn;i++)adj[i].clear();
		for(int i=0;i<n;i++){
		    int x,y;
			scanf("%d %d", &x, &y);
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		int mx = 0;
		for(int i = 0;i <nn; i++){
			if(!adj[i].empty() && color[i] ==NOT_VISITED){
				int black = 0, red = 0;
				queue<int> q;
				q.push(i);
				color[i] =BLACK;
				black++;
				while(!q.empty()){
					int node = q.front();
					q.pop();
					for(vector<int>::iterator it = adj[node].begin(); it != adj[node].end(); it++){
						if(color[*it] == NOT_VISITED){
							q.push(*it);
							if(color[node] == BLACK){
								color[*it] = RED;
								red++;
							}
							else{
								color[*it] = BLACK;
								black++;
							}
						}
					}
				}
				mx += max(red, black);
			}
		}

		printf("Case %d: %d\n",++c,mx);
	}

	return 0;
}

