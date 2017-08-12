#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    return (b==0)?a:gcd(b,a%b);
}
int lcm(int a,int b){return (a*b)/gcd(a,b);}
int main(){
    for(int i=1;i<=10000;i++){
        for(int j=i+1;j<=10000;j++){
            if(i+j==lcm(i,j)){cout<<i<<' '<<j<<endl;return 0;}
        }
    }
}
