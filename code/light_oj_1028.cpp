#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool a[1000000];
ll b[1000000];
void sieve()
{
    ll n=1000000;
    a[0]=true;
    a[1]=true;
    a[2]=false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(a[i]==false){
            for(int j=i*i;j<=n;j+=i)
            {
                a[j]=true;
            }
        }
    }
    int k=0;
    for(int j=2;j<=1000000;j++)
    {
        if(a[j]==false){
            b[k]=j;
            k++;
        }
    }
}
ll count_digit(ll a1,ll b1)
{
    ll count1=0;
    while(a1!=0)
    {
        if(a1%b1==0)
        {
            count1++;
            a1/=b1;

        }
        else
            break;
    }
    return count1;
}
int main()
{
    ll num;
    int i,t;
    cin>>t;
    sieve();
    int k=0;
    for(int i=1;i<=t;i++)
    {
        cin>>num;
        ll max1=0;
        int mas=b[1];
        printf("Case %d: ",i);
        int c=0;
        while(num>=b[c])
        {
            int num1=b[c];
            ll sum=count_digit(num,num1);
            cout<<sum<<endl;
            if(max1<sum)
                max1=sum;
            c++;
        }
        cout<<max1<<endl;
    }

}

