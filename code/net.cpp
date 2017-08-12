#include<stdio.h>
#include<math.h>
double f(double x){
    return x*x*x-2*x-5;
}
double df(double x){
    return 3*x*x-2;
}
int main(){
    double x,x1,e,fx,fx1;
    printf("Enter the initial guess: ");
    scanf("%lf",&x1);
    printf("Enter desired accurecy: ");
    scanf("%lf",&e);
    printf("x(i)\tx(i+1)\t{x(i+1)-x(i)}\n");
    while(fabs(x1-x)>=e){
        x=x1;
        fx=f(x);
        fx1=df(x);
        x1=x-(fx/fx1);
        printf("%.4lf\t%.4lf\t%.4lf\n",x,x1,fabs(x1-x));
    }
    printf("The root of the equation is: %.4lf\n",x1);
}
