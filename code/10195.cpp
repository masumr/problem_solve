#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,x,sum;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3){
        if(a!=0 || b!=0 || c!=0){
            x=(a+b+c)/2;
            sum=sqrt(((x-a)*(x-b)*(x-c))/x);
        }
        else sum=0;
        printf("The radius of the round table is: %.3lf\n",);
    }
}
