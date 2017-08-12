#include<bits/stdc++.h>
using namespace std;
int main(){
    double l,f;
    while(cin>>l>>f &&(l!=0 || f!=0)){
        double v=sqrt(2*l*f);
        double v1=(v*3600)/(2*l);
        printf("%.8lf %.8lf\n",v,v1);
    }
}
