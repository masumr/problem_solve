#include<bits/stdc++.h>
using namespace std;
const int N=103;
int a[N][N],rs[N];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    int mx=INT_MIN;
    for(int lc=0;lc<n;lc++){
        memset(rs,0,sizeof rs);
        for(int rc=lc;rc<n;rc++){
            for(int r=0;r<n;r++)rs[r]+=a[r][rc];
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=rs[i];
                mx=max(mx,sum);
                if(sum<0)sum=0;
            }
        }
    }
    printf("%d\n",mx);
}
