#include<bits/stdc++.h>
using namespace std;;
#define PI acos(-1)
int main(){
    double a;
    while(cin>>a){
        cout<<a*a*(1-sqrt(3)+PI/3)<<" "<<a*a*(2*sqrt(3)-4+PI/3)<<" "<<a*a*(4-2*PI/3-sqrt(3))<<endl;
    }
}
