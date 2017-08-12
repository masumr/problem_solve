#include<bits/stdc++.h>
using namespace std;
const int N=103;
int v1[N],v2[N];
int n;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        memset(v1,0,sizeof v1);
        memset(v2,0,sizeof v2);
        for(int i=1;i<=n;i++){
            int x,y,z;
            scanf("%d%d%d",&x,&y,&z);
            if(!v1[x] && !v2[y]){
                v1[x]=v2[y]=1;
                m1+=z;
            }
            else{
                v1[y]=v2[x]=1;
                m2+=z;
            }
        }
        printf("Case %d: %d\n",++c,min(m1,m2));
    }
}
