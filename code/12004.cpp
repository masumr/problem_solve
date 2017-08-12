#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        cin>>n;
        printf("Case %d: ",++c);
        //if(n==1) cout<<0<<endl;
        if(((n*(n-1))/2) & 1) cout<<(n*(n-1))/2<<'/'<<2<<endl;
        else cout<<(n*(n-1))/4<<endl;
    }
}
