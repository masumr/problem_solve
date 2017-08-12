#include<bits/stdc++.h>
#define fai 1.618033989
using namespace std;
typedef long long int ll;
template<typename T>
T pow(T n)
{
    if(n==0)
        return 1;
    if(n==1)
        return fai;
    T t=pow(n/2);
    return t*t*pow(n%2);
}
int main()
{
    ll a;
    cin>>a;
    cout<<(ll)(pow(a)/sqrt(5))<<endl;

}
