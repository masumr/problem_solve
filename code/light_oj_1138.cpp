#include <bits/stdc++.h>
using namespace std ;
int rez (int x){
    int sum=0 ;
    while (x!=0){
        x=x/5 ;
        sum+=x  ;
    }
    return sum ;
}
int go (int n){
    int low=0,high=1000000000,mid,ans=0 ;
    while (low<=high){
        mid=(low+high)/2 ;
        if (rez(mid) < n) low=mid+1 ;
        else if (rez(mid) > n) high = mid-1 ;
        else{
            ans =mid ;
            high=mid-1;
        }
    }
    return ans ;
}

int main (){
    int t,c=0,ret ;
    cin>>t ;
    while(t--){
        int n;
        cin>>n ;
        ret=go(n);
        if (ret==0) cout<<"Case "<<++c<<": "<<"impossible"<<endl ;
        else cout<<"Case "<<++c<<": "<<ret<<endl ;
    }
}
