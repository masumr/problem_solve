#include<bits/stdc++.h>
using namespace std;
const int inf=INT_MAX;
int main(){
    int n;
    while(scanf("%d",&n)==1){
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            v.push_back(x);
        }
        int I1[n+2],I2[n+2];
        I1[0]=-inf;I2[0]=-inf;
        for(int i=1;i<=n;i++){
            I1[i]=inf;
            I2[i]=inf;
        }
        int l1[n+2],l2[n+2];
        for(int i=0;i<=n;i++){
            l1[i]=1;
            l2[i]=1;
        }
        int ll=0;
        for(int i=0;i<n;i++){
            int lo=0,hi=ll,mid;
            while(lo<=hi){
                mid=(lo+hi)/2;
                if(I1[mid]<v[i])lo=mid+1;
                else hi=mid-1;
            }
            I1[lo]=v[i];
            l1[i]=lo;
            if(ll<lo)ll=lo;
        }
        reverse(v.begin(),v.end());
        ll=0;
        for(int i=0;i<n;i++){
            int lo=0,hi=ll,mid;
            while(lo<=hi){
                mid=(lo+hi)/2;
                if(I2[mid]<v[i])lo=mid+1;
                else hi=mid-1;
            }
            I2[lo]=v[i];
            l2[i]=lo;
            if(ll<lo)ll=lo;
        }
        int mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                if(l1[i]==l2[j]){
                    //cout<<l1[i]<<' '<<l2[j]<<endl;
                    mx=max(mx,l1[i]);
                    break;
                }
            }
        }
        printf("%d\n",mx*2-1);
        v.clear();
    }
}
