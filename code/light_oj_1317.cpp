#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string a="donate";
    string c;
    ll x,sum,n;
    int i,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        sum=0;
        printf("Case %d:\n",i);
        for(int j=0;j<n;j++)
        {
            cin>>c;
            if(c==a)
            {
                cin>>x;
                sum+=x;
            }
            else
                cout<<sum<<endl;
        }
    }
}
