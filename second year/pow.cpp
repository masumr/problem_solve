#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll pow(ll num,ll power)
{
    if(power==0)
        return 1;
    if(power==1)
        return num;
    ll t=pow(num,power/2);
    return t*t*pow(num,power%2);
}
int main()
{
    ll n,p;
    cin>>n>>p;
    cout<<pow(n,p)<<endl;
}
