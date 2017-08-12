#include<bits/stdc++.h>
using namespace std;
const int N=100;
int a[N];
int pe[N][10];
void proces(int n){
    for(int i=0;i<n;i++)pe[i][0]=i;
    for(int j=1;(1<<j)<=n;j++){
        for(int i=0;(i+(1<<j)-1)<n;i++){
            //cout<<a[pe[i][j-1]]<<' '<<a[pe[i+(1<<(j-1))][j-1]]<<endl;
            if(a[pe[i][j-1]]<a[pe[i+(1<<(j-1))][j-1]]){
                pe[i][j]=pe[i][j-1];
            }
            else{
                pe[i][j]=pe[i+(1<<(j-1))][j-1];
            }
        }
    }
}
int rmg(int lo,int hi){
    int l=(hi-lo+1);
    int k=log2(l);
    //cout<<k<<' '<<l<<endl;
    return min(a[pe[lo][k]],a[pe[lo+l-(1<<k)][k]]);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
   proces(n);
   int m;
   scanf("%d",&m);
   while(m--){
        int lo,hi;
        scanf("%d%d",&lo,&hi);
        cout<<rmg(lo,hi)<<endl;
   }
}
