#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll j,t;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        ll number;
        cin>>number;
        double sum=0;
        for(ll i=1;i<=number;i++)
            sum+=log10(i);
        cout<<(int)(sum)+1<<endl;
    }
    return 0;
}
