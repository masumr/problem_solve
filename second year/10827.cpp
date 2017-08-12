#include<bits/stdc++.h>
using namespace std;
const int N=76;
int a[N][N];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int mx=0;
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
        for(int i=0;i<n;i++){
            int r[n+1];
            memset(r,0,sizeof r);
            for(int j=i;j<n;j++){
                for(int k=0;k<n;k++){
                    r[k]+=a[k][j];
                }
                int sum=0;
                for(int k=0;k<n;k++){
                    sum+=r[k];
                    mx=max(mx,sum);
                    if(sum<=0)sum=0;
                }
            }
        }
        printf("%d\n",mx);
    }
}
