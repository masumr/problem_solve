#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a[100000];
    ll i,t;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
            cin>>a[i];
        ll count=0;
        for(i=0;i<t;i++)
        {
            for(ll j=t-1;j>i;j--)
            {
                if(a[j-1]>a[j])
                {
                    swap(a[j-1],a[j]);
                    count++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",count);
    }
}
