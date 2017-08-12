#include<bits/stdc++.h>
using namespace std;
int a[100];
int sum[100];
void marze(int lo,int hi){
    if(lo==hi)return;
    int mid=(lo+hi)/2;
    marze(lo,mid);
    marze(mid+1,hi);
    for(int i=lo,j=mid+1,k=lo;k<=hi;k++){
        if(i==mid+1)sum[k]=a[j++];
        else if(j==hi+1)sum[k]=a[i++];
        else if(a[i]>a[j])sum[k]=a[j++];
        else sum[k]=a[i++];
    }
    for(int i=lo;i<=hi;i++)a[i]=sum[i];
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    marze(0,n-1);
    for(int i=0;i<n;i++)cout<<a[i]<<' ';
}
