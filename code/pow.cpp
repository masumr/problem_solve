#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll pow(ll n,ll p)
{
    if(p==0)
        return 1;
    if(p==1)
        return n;
    double t=pow(n,p/2);
    return t*t*pow(n,p%2);
}
int main()
{
    ll number,power;
    while(cin>>number>>power)
    {
        cout<<pow(number,power)<<endl;;
    }
}
