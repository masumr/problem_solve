#include <bits/stdc++.h>
using namespace std;
double angle(double a,double b,double c){
    return acos((b*b+c*c-a*a)/(2*b*c));
}
double area_p(double r, double A){
    return 0.5*A*r*r;
}
int main()
{
    int t,i;
    double a,b,c,s,area_t,A,B,C,x,r1,r2,r3;
    scanf("%d",&t);
    i = 1;
    while(t--){
        scanf("%lf %lf %lf",&r1,&r2,&r3);
        a = r2+r3;
        b = r1+r3;
        c = r1+r2;
        s = (r1+r2+r3);
        area_t = sqrt(s*(s-a)*(s-b)*(s-c));
        A = angle(a,b,c);
        B = angle(b,a,c);
        C = angle(c,a,b);
        x = area_p(r1,A)+area_p(r2,B)+area_p(r3,C);
        printf("Case %d: %.10lf\n",i++,(area_t-x));
    }
    return 0;
}
