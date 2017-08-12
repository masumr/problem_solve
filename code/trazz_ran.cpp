#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        ll sum=0;
        ll count=0;
        int a;
        while(count<n)
        {
            cin>>a;
            sum+=a;
            if(a==0)
                count++;
        }
        printf("Case %d: %lld\n",i,sum);
    }
}
