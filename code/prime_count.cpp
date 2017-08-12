#include<bits/stdc++.h>
using namespace std;
void prime_count(int n)
{
    int sum=n;
    while(sum%2==0)
    {
        cout<<2<<' ';
        sum/=2;
    }
    for(int i=3;i<=sum;i+=2)
    {
        while(sum%i=0)
        {
            cout<<i<<' ';
        }
    }
    if(sum>1)
        cout<<sum<<endl;
}
