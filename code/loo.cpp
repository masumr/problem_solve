#include<stdio.h>
int main(){
    int i,sum;
    for(i=1;i<=10;i++)sum+=i;
    printf("SUM =%d\n",sum);
    i=0;
    sum=0;
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("SUM =%d\n",sum);
    i=0;
    sum=0;
    do{
        sum+=i;
        i++;
    }while(i<=10);
    printf("SUM =%d\n",sum);

}
