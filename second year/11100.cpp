#include<bits/stdc++.h>
using namespace std;
const int N=10007;
map<int,int>mp;
int a[N];
int main(){
    int n;
    while(scanf("%d",&n) && n){
        int x,mx=0,kx=0,k=0;
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            //if(!mp[x]){
                a[k++]=x;
            //}
            mp[x]++;
            mx=max(mx,mp[x]);
           // kx=max(kx,x);
        }
        sort(a,a+k);
        printf("%d\n",mx);
        for(int j=0;j<mx;j++){
            bool ck=0;
            for(int i=j;i<k;i+=mx){

                    if(!ck){
                        printf("%d",a[i]);
                        ck=1;
                    }
                    else printf(" %d",a[i]);
            }
            printf("\n");
        }
    mp.clear();
    }
}
