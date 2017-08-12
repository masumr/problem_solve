#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    string str;
    cin>>n;
    ll a[n+10];
    cin>>str;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        if(str[i]=='L')
            a[i]--;
        else
            a[i]++;
    }
    sort(a,a+n);
    ll count=0;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
            count++;
    }
    if(count!=0)
        cout<<count<<endl;
    else
        cout<<-1<<endl;
}
