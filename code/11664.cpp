#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll x;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x;
        cout<<(int)((sqrt(1+8*x)-1)/2)<<endl;
    }
}
