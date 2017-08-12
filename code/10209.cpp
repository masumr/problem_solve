#include<bits/stdc++.h>
using namespace std;;
#define PI acos(-1)
double x=(1-sqrt(3)+PI/3);
double y=(2*sqrt(3)-4+PI/3);
double z=(4-2*PI/3-sqrt(3));
int main(){
    double a;
    while(cin>>a){
        printf("%.3lf %.3lf %.3lf\n",a*a*x,a*a*y,a*a*z);
    }
}
