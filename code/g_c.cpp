#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float a;
        float pi=acos(-1);
        cin>>a;
        printf("%.2f\n",(a*a)-(.25*pi*a*a));
    }
}
