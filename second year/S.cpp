#include<bits/stdc++.h>
using namespace std;
const int N=100009;
int a[N],b[N],sum[N];
void marze_sort(int lo,int hi){
    if(lo==hi)return;
    int mid=(lo+hi)/2;
    marze_sort(lo,mid);
    marze_sort(mid+1,hi);
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
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)b[i]=a[i];
    marze_sort(1,n);
    int mn=n,mx=0;
    for(int i=1;i<=n;i++){
        if(b[i]!=a[i]){
            if(mn>i)mn=i;
            if(mx<i)mx=i;
        }
    }
    //cout<<mx<<' '<<mn<<endl;
    if(mn==n && mx==0)cout<<0<<endl;
    else    cout<<mx-mn+1<<endl;
}
