#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    //cout<<1234567890+1<<endl;
    ll m,n,k;
    cin>>m>>n>>k;
    int mn=1;
    //cout<<n/m<<endl;
    //cout<<n%m<<endl;
    if(m==1)cout<<n<<endl;
    else{
        ll ken=sqrt(8*n+1)-1;
        ken/=2;
        int mx=max(k,ken-k+1);
        //cout<<di<<' '<<endl;
        cout<<mx<<endl;
    }
}
