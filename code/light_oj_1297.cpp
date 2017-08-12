#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        double w,l,x;
        cin>>w>>l;
        x=(w+l-sqrt(w*w+l*l-(w*l)))/6;
        w-=(2*x);
        l-=(2*x);
        printf("Case %d: %.10lf\n",++c,w*l*x);
    }
}
