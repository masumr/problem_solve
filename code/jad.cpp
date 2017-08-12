#include<bits/stdc++.h>
using namespace std;
#define a 0.57721566490153286060651209008240243104215933593992
int main(){
    double x;
    int t,c=0;
    cin>>t;
    while(t--){
        double n;
        cin>>n;
        cout<<((log10(n))+a+(1/2*n)-(1/(12*n*n)))<<endl;
    }
}
