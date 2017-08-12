#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main(){
    int t;
    scanf("%d",&t);
    float n=(t*pi)/180;
    printf("%f\n",cos(n));
}
