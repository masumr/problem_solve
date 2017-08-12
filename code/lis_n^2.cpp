#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    int lis[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        lis[i]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                lis[j]=max(lis[j],lis[i]+1);
            }
        }
    }
    int mx=1,t;
    for(int i=0;i<n;i++){
        if(mx<lis[i]){
            mx=lis[i];
            t=i;
        }
    }
    cout
}
