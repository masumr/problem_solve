#include<stdio.h>
int add(int x,int y){return(y==0)?x:add(x^y,(x&y)<<1);}
int main(){
   int a,b;
   scanf("%d%d",&a,&b);
   printf("%d\n",add(a,b));
}
