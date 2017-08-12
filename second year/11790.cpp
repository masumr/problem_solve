#include<bits/stdc++.h>
using namespace std;
const int N=1500;
int l[N],w[N];
int dis[N],se[N],s[N],d[N];
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<=n;i++)dis[i]=1;
        for(int i=0;i<=n;i++)d[i]=1;
        for(int i=0;i<n;i++)scanf("%d",&l[i]);
        for(int i=0;i<n;i++)scanf("%d",&w[i]);
        for(int i=0;i<n;i++)s[i]=w[i];
        for(int i=0;i<n;i++)se[i]=w[i];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(l[i]<l[j]){
                        if(se[j]<se[i]+w[j]){
                            se[j]=se[i]+w[j];
                    }
                }
                if(l[i]>l[j]){
                    if(s[j]<s[i]+w[j])s[j]=s[i]+w[j];
                }
            }
        }
        int m1=0,m2=0;
        for(int i=0;i<n;i++){
            m1=max(m1,se[i]);
            m2=max(m2,s[i]);
        }
        if(m1<m2)printf("Case %d. Decreasing (%d). Increasing (%d).\n",++c,m2,m1);
        else printf("Case %d. Increasing (%d). Decreasing (%d).\n",++c,m1,m2);
    }
}
