#include<bits/stdc++.h>
using namespace std;
int arr[10000000];
int main(){
    int mx_sum=-100000000,sum=0,i;
    int n=0;
    while(cin>>n){
        for(i=1;i<=n*n;i++)cin>>arr[i];
        for(i=1;i<=n*n;i++){
            sum=sum+arr[i];
            if(sum>mx_sum)mx_sum=sum;
            if(sum<0)sum=0;
        }
        cout<<mx_sum<<endl;;
    }
}
