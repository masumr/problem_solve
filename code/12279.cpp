#include<cstdio>
int main(){
    int n,c=0;
    while(scanf("%d",&n) && n){
        int c1=0,c2=0;
        while(n--){
            int x;
            scanf("%d",&x);
            if(x)c1++;
            else c2++;
        }
        printf("Case %d: %d\n",++c,c1-c2);
    }

}
