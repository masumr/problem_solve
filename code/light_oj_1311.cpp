#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        double v1,v2,v3,a1,a2,t1,t2,d,birdDist;
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        t1=v1/a1; t2=v2/a2;
        birdDist =max( v3*t1,v3*t2);
        d = (v1*t1-0.5*a1*t1*t1)+(v2*t2-0.5*a2*t2*t2);
        printf("Case %d: %.10lf %.10lf\n",i,d,birdDist);
    }
}
