#include<bits/stdc++.h>
using namespace std;
const int N=100009;
int a[N];
int T[N*3];
int sum[N];
int len[N];
void update(int n,int b,int e,int i,int nv){
    if(i>e || i<b || b>e)return;
    if(b==e){
        T[n]=nv;
    }
    else{
        update(n*2,b,(b+e)/2,i,nv);
        update(n*2+1,(b+e)/2+1,e,i,nv);
        T[n]=max(T[n*2],T[n*2+1]);
    }
}
int qurey(int n,int i,int j,int b,int e){
    if(i>e || j<b|| b>e ) return INT_MIN;
    if(i>=b && j<=e) return T[n];
    return max(qurey(n*2,i,(i+j)/2,b,e),qurey(n*2+1,(i+j)/2+1,j,b,e));
}
int main(){
    int n,m;
    while(scanf("%d",&n) && n){
        scanf("%d",&m);
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        int cnt=1;
        update(1,1,n,1,1);

        for(int i=2;i<=n;i++){
            if(a[i]==a[i-1]){
                cnt++;
                len[i]=cnt;
                //cout<<i<<' '<<i-1<<' '<<cnt<<endl;
                update(1,1,n,i,cnt);
            }
            else{
                //cout<<endl;
                cnt=1;
                len[i]=cnt;
                update(1,1,n,i,cnt);
            }
        }
        for(int i=0;i<m;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            printf("%d\n",qurey(1,1,n,x,y));
        }
    }
}
