#include<bits/stdc++.h>
using namespace std;
void odd_int(int a[],int i,int n){
    if(i==n) return;
    odd_int(a,i+1,n);
    if(!a[i]%2) cout<<a[i]<<' ';
}
int maun(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    odd_int(a,0,n);
}
