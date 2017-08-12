#include<cstdio>
int main(){
    int n,t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        printf("%d\n",(y^(y>>1)));
    }
}
