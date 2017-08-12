#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,sd,sum1;
    while(cin>>a>>b)
    {
        if(a<0 && b<0)
            break;
        ll sum=0,i;
        ll p=a%10;
        ll n=b%10;
        ll w=a/10;
        ll z=b/10;
        if(a%10>1 || b%10>1){
            sum1=((n*(n+1))/2)-((p*(p+1))/2);
        }
        else
            sum1=0;
        ll x=((b-a)+1)/10;
        sum=(x*45)+sum1;
        if(a%10==0){
            sd=(((z*(z+1))/2)-(((w-1)*(w))/2));
        }
        else
        {
           sd=((z*(z+1))/2)-((w*(w+1))/2);
        }
        cout<<sum+sd<<endl;
    }
}
