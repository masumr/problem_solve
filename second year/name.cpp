#include<stdio.h>
int gcd(int a,int b){return (b==0)?a:gcd(b,a%b);}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int lcm=a/gcd(a,b)*b;
    printf("%d\n",lcm);
}
