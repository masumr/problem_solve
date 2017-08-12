#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    char a[300];
    ll b;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        ll k=0;
        ll sum=0;
        if(a[0]=='-')
            k++;
        if(b<0)
            b*=(-1);
        ll x=strlen(a);
        for(ll j=k;j<x;j++)
        {
          sum=(sum*10+((int)(a[j]-48)))%b;
        }
        printf("Case %d: ",i);
        if(sum==0)
            cout<<"divisible"<<endl;
        else
            cout<<"not divisible"<<endl;
    }

}
