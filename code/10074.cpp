#include<cstdio>
#include<string.h>
#include<algorithm>

using namespace std;
const int N=101;
int a[N][N];
int main(){
    int n,m;
    while(scanf("%d%d",&n,&m) && (n&&m)){
        for(int i=0;i<n;i++)for(int j=0;j<m;j++)scanf("%d",&a[i][j]);
        int r[n+1];
        int mx=0;
        for(int i=0;i<m;i++){
            memset(r,0,sizeof r);
            for(int j=i;j<m;j++){
                for(int k=0;k<n;k++){
                    if(r[k]!=-1){
                        if(a[k][j]==0)r[k]++;
                        else r[k]=-1;
                    }
                }
            int sum=0;
            for(int k=0;k<n;k++){
                    if(r[k]==-1){
                        sum=0;
                    }
                    else{
                        sum+=r[k];
                        mx=max(mx,sum);
                    }
                }
            }

        }
        printf("%d\n",mx);
        //printf("%d\n",mx);
    }
}
