///18.convert decimal to binary number
#include<stdio.h>
void binary_number(int n){
    if(n<=1){
        printf("%d",n);
        return;
    }
    int rem=n%2;
    binary_number(n/2);
    printf("%d",rem);
}
int main(){
    int n;
    scanf("%d",&n);
    binary_number(n);
}
