#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){return (b==0)?a:gcd(b,a%b);}
int lcm(int a,int b){return a/gcd(a,b)*b;}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(c/lcm(a,b))<<endl;
}
