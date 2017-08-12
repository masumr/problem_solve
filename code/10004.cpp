#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define pb push_back
#define sii(t) scanf("%d",&t)
#define ssii(a,b) scanf("%d%d",&a,&b)
#define cover(a,d) memset(a,d,sizeof(a))
int main(){
    int n,e,p;
    while(scanf("%d",&n) and n!=0){
        sii(e);
        vector<int>ed[2000];
        int color[2000];
        memset(color,-1,sizeof color);
        for(int i=0;i<e;i++){
            int x,y;
            cin>>x>>y;
            ed[x].pb(y);
            ed[y].pb(x);
        }
        queue<int>work;
        int f=0;
        color[0]=0;
        work.push(0);
        while(!work.empty()){
            p=work.front();
            work.pop();
            int vsize=ed[p].size();
            for(int i=0;i<vsize;i++)
            {
                if(color[ed[p][i]]==-1)
                {
                    if(color[p]==0)
                     color[ed[p][i]]=1;
                    else
                    color[ed[p][i]]=0;
                     work.push(ed[p][i]);
                }
                else
                {
                    if(color[ed[p][i]]==color[p]){
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)
                break;
        }
        if(f==1)
        pf("NOT BICOLORABLE.\n");
        else
        pf("BICOLORABLE.\n");
    }
}

