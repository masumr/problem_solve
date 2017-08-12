#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a[30],b[30],num,sum,sum1=1;
    ll cas,t;
    a[0]=1;
    for(ll i=1;i<=20;i++)
    {
        sum1*=i;
        a[i]=sum1;
    }
    cin>>t;
    for(cas=1;cas<=t;cas++)
    {
        cin>>num;
        ll c=0,l=0;
        sum=0;
        for(ll j=20;j>=0;j--){
            if((sum+a[j])<=num)
            {
                sum+=a[j];
                b[l++]=j;
            }
            if(sum>num)
                break;
        }
        printf("Case %d: ",cas);
        if(sum==num){
            for(ll h=l-1;h>=0;h--)
            {
                cout<<b[h]<<"!";
                if(h!=0)
                    cout<<"+";
            }
        }
        else
            cout<<"impossible";
        cout<<endl;
    }
}
