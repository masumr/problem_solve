#include<stdio.h>
int main(){
    int min,max;
    int sum=0;
    scanf("%d",&min);
    scanf("%d",&max);
    printf("Perfect Number is: ");
    for(int n=min;n<=max;n++){
        sum=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                sum+=i;
                if(n/i!=i)sum+=n/i;
            }
        }
        if(sum==n*2)printf("%d ",n);
    }
    printf("\n");
}
