#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main(){
    int n;
    cin>>n;
    int mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(mx-a[i]);
    }
    cout<<sum<<endl;
}
