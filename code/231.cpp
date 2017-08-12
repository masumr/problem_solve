#include<bits/stdc++.h>
using namespace std;
const int N=100000;
const int inf=INT_MAX;
int a[N];
int len[N];
int main(){
    int t=0;
    bool ck=0;
    while(scanf("%d",&a[0])==1){
        if(a[0]==-1)break;
        if(ck)printf("\n");
        ck=1;
        int k=1,x;
        while(scanf("%d",&x)){
            if(x==-1)break;
            a[k++]=x;
        }
        set<int>lis;
        set<int>::iterator it;
        for(int i=k-1;i>=0;i--){
            lis.insert(a[i]);
            it=lis.upper_bound(a[i]);
            if(it!=lis.end())lis.erase(it);
        }
        printf("Test #%d:\n",++t);
        printf("  maximum possible interceptions: %d\n",lis.size());
        lis.clear();
        //printf("\n");
    }
}
