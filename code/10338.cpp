#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    ll sum[30];
    sum[0]=1;
    for(ll i=1;i<=20;i++)
        sum[i]=sum[i-1]*i;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        string a;
        cin>>a;
        ll x=a.size();
        ll num=sum[x];
        sort(a.begin(),a.end());
        char ch;
        for(ll j=0;j<x;j++)
        {
            ch=a[j];
            int count=0;
            while(ch==a[j])
            {
                count++;
                j++;
            }
            j--;
            num/=sum[count];
        }
        printf("Data set %lld: %lld\n",i,num);
    }

}
