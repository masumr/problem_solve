#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a,b,i=1,r;
    while(cin>>a)
    {
        b=a%1000000000;
        cout<<i<<". ";
        if(a/1000000000!=0)
        {
            r=a/1000000000;
            if(r/10000000!=0)
            {
                cout<<r/10000000<<" kuti ";
                r=r%10000000;
            }
            if(r/100000!=0)
            {
                cout<<r/100000<<" lakh ";
                r=r%100000;
            }
            if(r/1000!=0)
            {
                cout<<r/1000<<" hajar ";
                r=r%1000;
            }
            if(r/100!=0)
            {
                cout<<r/100<<" shata ";
            }

        }
        if(b/10000000!=0)
        {
            cout<<b/10000000<<" kuti ";
            b=b%10000000;
        }
        if(b/100000!=0)
        {
            cout<<b/100000<<" lakh ";
            b=b%100000;
        }
        if(b/1000!=0)
        {
            cout<<b/1000<<" hajar ";
            b=b%1000;
        }
        if(b/100!=0)
        {
            cout<<b/100<<" shata ";
            b=b%100;
        }
        if(b!=0)
            cout<<b;
        cout<<endl;
        i++;
    }
}
