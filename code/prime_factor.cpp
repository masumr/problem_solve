#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("prime factor %d: ",n);
    int ck=0;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            if(ck)printf("x");
            printf("%d",i);
            n/=i;
            ck=1;
        }
    }
    if(n>1){
        if(ck)printf("x");
        printf("%d",n);
    }
    printf("\n");
}
