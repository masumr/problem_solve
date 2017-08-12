#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int gcd(int a,int b);
int lcm(int a,int b){return (a/gcd(a,b))*b;}
int main(){
    int a,b;
   while(cin>>a>>b){
    cout<<gcd(a,b)<<endl;
   }
}
int gcd(a,b){return (b==0)?a:gcd(b,a%b);}
