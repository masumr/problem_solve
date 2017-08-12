#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int a[5007],b[5007],c[5007][5007];
int main(){
    int t,d=0;
    scanf("%d",&t);
    while(t--){
        int n,x;
        memset(c,0,sizeof c);
        scanf("%d",&n);
        memset(b,0,sizeof b);
        int k=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[a[i]]=1;
        }
        sort(a,a+n);
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=a[i]+a[j];
                if(b[sum]==1 && c[a[i]][a[j]]==0){
                    count++;
                    c[a[i]][a[j]]=1;
                }
            }
        }
        printf("Case %d: %d\n",++d,count);
        //v.clear();mp.clear();
    }
}
