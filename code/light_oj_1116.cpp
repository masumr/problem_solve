#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,n,m;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        printf("Case %d: ",i);
        if(a%2==0)
        {
            ll sum=1;
           while(a%2==0)
           {
               a/=2;
               sum*=2;
           }
            cout<<a<<' '<<sum<<endl;
        }
        else
            cout<<"Impossible"<<endl;
    }
}
