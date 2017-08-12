#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll l1,r1,l2,r2,k;
    cin>>l1>>r1>>l2>>r2>>k;
    l1=max(l1,l2);r1=min(r1,r2);
    ll dif=(r1-l1+1);
    //cout<<l1<<' '<<r1<<' '<<dif<<endl;
    if(k>=l1 && k<=r1)dif--;
    dif=max(dif,(ll)0);
    cout<<dif<<endl;
}
//24648817341102 41165114064236 88046848035 13602161452932 10000831349205
