#include<bits/stdc++.h>
using namespace std;
double pi=acos(-1);
int main(){
    double a,b;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf",&a,&b);
        a/=2;
        b/=2;
        a=sqrt((b*b)-(a*a));
        printf("%.3lf\n",pi*a*b);
    }
}
