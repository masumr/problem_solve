#include<stdio.h>
int sum;
void num(int a,int b){
    sum=a+b;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    num(a,b);
    printf("%d\n",sum);
}
