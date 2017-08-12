#include<bits/stdc++.h>
using namespace std;
int jo(int n,int k){
    return (n==1)?1:(jo(n-1,k)+k-1)%n+1;
}
int main(){
    int n,k,c=0;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        printf("Case %d: %d\n",++c,jo(n,k));
    }
}
