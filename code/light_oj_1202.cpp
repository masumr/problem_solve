#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        ll r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        printf("Case %d: ",++c);
        ll r3=abs(r1-r2);
        ll c3=abs(c1-c2);
        if(r3==c3) cout<<1<<endl;
        else {
            if(r3%2==c3%2) cout<<2<<endl;
            else cout<<"impossible"<<endl;
        }

    }
}
