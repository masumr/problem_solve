#include<cstdio>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int mod,r,c;
        scanf("%d%d",&mod,&r);
        int sum=0;
        while(r--){
            int s1=1;
            scanf("%d",&c);
            while(c--){
                int x;
                scanf("%d",&x);
                s1=(s1*x)%mod;
            }
            sum=(sum+s1)%mod;
        }
        printf("%d\n",sum);
    }
}
