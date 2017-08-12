#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[200],b[200];
ll s[400];
int binary_search(int lo,int hi,ll n){
    if(lo>=hi)return lo;
    int mid=(lo+hi)/2;
    if(s[mid]>=n)return binary_search(lo,mid,n);
    else binary_search(mid+1,hi,n);
}
int main(){
    ll sum=1,sum1=1;
    int i,j,kk=0,k=0,kl=0,kj=0;
    ll mx=2147483900;
    for(i=1;i<=33;i++){
        sum*=2;
        sum1*=3;
        if(sum<mx){a[k++]=sum;kl=i;}
        if(sum1<mx){b[kk++]=sum1;kj=i;}
    }
    //for(int i=0;i<kl;i++)cout<<a[i]<<' ';
    k=1;
    s[0]=1;
    for(i=0;i<kl;i++){
        for(j=0;j<kj;j++){
            sum=a[i]*b[j];
            if(sum<mx)s[k++]=sum;
        }
    }
    for(i=0;i<kl;i++)s[k++]=a[i];
    for(i=0;i<kj;i++)s[k++]=b[i];
    sort(s,s+k);
    //for(int i=0;i<=100;i++)cout<<s[i]<<' ';
    ll n;
    while(scanf("%lld",&n) && n){
        int t=binary_search(0,k-1,n);
        printf("%lld\n",s[t]);
    }

}
