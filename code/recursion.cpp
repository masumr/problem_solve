#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fib(ll n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    return fib(n-1)+fib(n-2);
}
int main()
{
    ll a;
    cin>>a;
    cout<<(fib(a-1)*fib(a))+(fib(a)*fib(a+1))<<endl;
    cout<<endl;
}
