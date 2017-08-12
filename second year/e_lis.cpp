#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n)==1){
        int a[n+2],b[n+2];
        for(int i=1;i<=n;i++)b[i]=1;
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(a[i]<a[j])b[j]=max(b[j],b[i]+1);
            }
        }
        int mx=0;
        for(int i=1;i<=n;i++)mx=max(mx,b[i]);
        printf("%d\n",mx);
    }
}
