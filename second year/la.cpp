#include<bits/stdc++.h>
using namespace std;
const int N=123456;
int a[N];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int cnt=0;
    for(int i=1;i<n-1;i++){
        cout<<i<<endl;
        if(a[i-1]>a[i] && a[i]<a[i+1])cnt++;
    }
    cout<<cnt<<endl;
}
