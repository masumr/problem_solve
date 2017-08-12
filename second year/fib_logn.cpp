#include<bits/stdc++.h>
using namespace std;
int f[2][2],m[2][2];
void multiply(int f[2][2],int m[2][2]){
    int x=f[0][0]*m[0][0]+f[0][1]*m[1][0];
    int y=f[0][0]*m[0][1]+f[0][1]*m[1][1];
    int z=f[1][0]*m[0][0]+f[1][1]*m[1][0];
    int w=f[1][0]*m[0][1]+f[1][1]*m[1][1];
    f[0][0]=x;
    f[0][1]=y;
    f[1][0]=z;
    f[1][1]=w;
}
void power(int f[2][2],int n){
    if(n==0 || n==1) return;
    int m[2][2]={{1,1},{1,0}};
    power(f,n/2);
    multiply(f,f);
    if(n&1)multiply(f,m);
}
int fib(int n){
    if(n==0) return 0;
    int f[2][2]={{1,1},{1,0}};
    power(f,n-1);
    return f[0][0];
}
int main(){
    int n;
    while(cin>>n)cout<<fib(n)<<endl;
}
