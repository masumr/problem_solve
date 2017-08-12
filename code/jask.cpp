#include<cstdio>
using namespace std;
const int N=102;
int  mx[N][N];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        //memset(a,0,sizeof a);
        memset(mx,0,sizeof mx);
        for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int x;
            scanf("%d",&x);
             mx[i][j]=x+max(mx[i-1][j-1],mx[i-1][j]);
            }
        }
        int ck=0;
        for(int i=1;i<=n;i++)ck=max(ck,mx[n][i]);
        printf("%d\n",ck);
    }
}
