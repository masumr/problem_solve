#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b[100],k=1;
    while(cin>>a)
    {
        for(ll i=0;i<a;i++){
            cin>>b[i];
        }
        ll max=0;
        for(ll j=0;j<a;j++)
        {
            for(ll h=j;h<a;h++){
                ll sum=1;
                for(ll z=j;z<=h;z++){
                    sum=sum*b[z];
                }
                if(sum>max)
                    max=sum;
            }
        }
        printf("Case #%lld: The maximum product is %lld.\n\n",k,max);
        k++;
    }
}
