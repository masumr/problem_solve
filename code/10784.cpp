#include<stdio.h>
#include<math.h>
int main()
{
    long n,t=0,x;
    while(scanf("%ld",&n) && n){
        x=ceil((3+sqrt(9+8*n))/2);
        printf("Case %ld: %ld\n",++t,x);
    }
}
