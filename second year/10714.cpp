#include<cstdio>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,l;
        int mn=0,mx=0;
        scanf("%d%d",&l,&n);
        while(n--){
            int x;
            scanf("%d",&x);
            int l1=l-x;
            int l2=l-l1;
            if(l1<l2)swap(l1,l2);
            mx=max(mx,l1);
            mn=max(mn,l2);
        }
        printf("%d %d\n",mn,mx);
    }
}
