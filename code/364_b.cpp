#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll row[100050];
ll col[100050];
ll b[100050];
ll c[100050];
int main()
{
    ll x,y;
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    cin>>x>>y;
    for(int i=0;i<y;i++)
    {
        cin>>row[i]>>col[i];
    }
    ll sum,sum1=0,sum2=0;
    for(int i=0;i<y;i++)
    {

        if(b[row[i]]==0 || c[col[i]]==0)
        {
            for(int j=1;j<=x;j++)
            {
                b[row[i]]=1;
                c[col[i]]=1;
            }
            x--;
            sum=x*x;
        }
        if(b[row[i]]==0 || c[col[i]]==0)
        {
            sum-=x;
            for(int j=1;j<=x;j++)
            {
                b[row[i]]=1;
                c[col[i]]=1;
            }

        }
        cout<<sum<<' ';
    }
}
