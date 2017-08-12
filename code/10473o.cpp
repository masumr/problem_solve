/****Masum Rana****/
/*uva 10473 no problem*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string a;
    while(cin>>a)
    {
        if(atoll(a.c_str())<0)
            break;
        if(a[0]=='0' && a[1]=='x')
        {
            int n=a.size();
            ll sum=0,k=n-3;
            for(ll i=2;i<n;i++)
            {
                if(a[i]>='0' && a[i]<='9')
                    sum+=((a[i]-48)*pow(16,k--));
                if(a[i]>='A' && a[i]<='F')
                    sum+=(a[i]-55)*pow(16,k--);
            }
            cout<<sum<<endl;
        }
        else
        {
            ll x=atoll(a.c_str());
            printf("0x%X\n",x);
        }
    }
}
