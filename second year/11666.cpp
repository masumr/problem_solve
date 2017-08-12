#include<cstdio>
#include<math.h>
int main(){
    int n;
    while(scanf("%d",&n)&&n){
        int l=ceil((double)(log(n)-log(2.0)));
        double x=1-exp(log(n)-l);
        printf("%d %.8lf\n",l,x);
    }
}
