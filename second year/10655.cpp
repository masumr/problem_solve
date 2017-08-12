#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,n;
    while(scanf("%lf%lf",&a,&b) && (a&&b)){
        scanf("%lf",&n);
        double n1=(a+sqrt(a*a-4*b))/2;
        double n2=(a-sqrt(a*a-4*b))/2;
        double sum=pow(n1,n)+pow(n2,n);
        long ss=sum;
        printf("%lld\n",ss);
    }
}
