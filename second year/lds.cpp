#include<bits/stdc++.h>
using namespace std;
const int inf=INT_MAX;
int main(){
    int n;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            v.push_back(x);
        }
        int I1[n+2],I2[n+2];
        I1[0]=-inf;I2[0]=-inf;
        for(int i=1;i<=n;i++){
            I2[i]=inf;
            //I2[i]=inf;
        }
        reverse(v.begin(),v.end());
        int ll=0;
        for(int i=0;i<n;i++){
            int lo=0,hi=ll,mid;
            while(lo<=hi){
                mid=(lo+hi)/2;
                if(I2[mid]<v[i])lo=mid+1;
                else hi=mid-1;
            }
            I2[lo]=v[i];
            if(ll<lo)ll=lo;
        }
        printf("%d\n",ll);
        v.clear();
    }
}
