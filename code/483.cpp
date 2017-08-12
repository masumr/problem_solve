#include<bits/stdc++.h>
using namespace std;
double pi=acos(-1);
int main(){
    double x1,x2,y1,y2,z1,z2,a,b,c,s;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&x2,&y1,&y2,&z1,&z2)==6){
        a=sqrt(((x1-y1)*(x1-y1))+((x2-y2)*(x2-y2)));
        b=sqrt(((z1-y1)*(z1-y1))+((z2-y2)*(z2-y2)));
        c=sqrt(((x1-z1)*(x1-z1))+((x2-z2)*(x2-z2)));
        s=(a+b+c)/2;
        printf("%.2lf\n",2*pi*((a*b*c)/(4*sqrt(s*(s-a)*(s-b)*(s-c)))));
    }
}
