#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll i,t,a[10000],j;
    cin>>t;
    while(t--)
    {
        ll m;
        cin>>m;
        for(i=0;i<m;i++)
            cin>>a[i];
        ll count=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<m-i;j++)
            {
                if(a[i]>a[j])
                {
                    swap(a[i],a[j]);
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %lld swaps.\n",count);
    }
}
