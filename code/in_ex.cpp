#include<bits/stdc++.h>
using namespace std;
int a[100];
int ans;
int n,sum;
void res(int i,int j,int x){
    //cout<<j<<' '<<x<<endl;;
    if(i==n)return;
    for(int k=i;k<n;k++){
        int y=(a[k]*j)/(__gcd(a[i],j));
        if(x%2)ans-=sum/y;
        else ans+=sum/y;
        res(k+1,y,x+1);
    }
}
int main(){
    cin>>n>>sum;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ans=0;
    res(0,1,0);
    cout<<ans<<endl;
}
