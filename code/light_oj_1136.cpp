#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,sum,sum1;
    int i,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        sum=(a/3)*2;
        if(a%3!=0)
            sum++;
        sum1=b/3;
        if(b%3==2)
            sum1++;
        sum1*=2;
        if(b%3!=2)
            sum1++;
        printf("Case %d: ",i);
        cout<<sum1-sum<<endl;
    }
}
