#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt=0;
    int a,b;
    cin>>a>>b;
    //cout<<a<<' '<<b<<endl;
    while(a<=b){
        a*=3;
        b*=2;
        cnt++;
    }
    cout<<cnt<<endl;
}
