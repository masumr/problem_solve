#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    int sum=0,mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        mx=max(mx,sum);
        if(sum<0)sum=0;
    }
    cout<<mx<<endl;
}
