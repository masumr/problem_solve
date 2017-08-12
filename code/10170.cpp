#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,t;
    while(cin>>s>>t)
    {
        long long d,sum=0;
        long long count=s;
        for(d=s;;d++)
        {
            sum+=d;
            if(sum>t || sum==t)
            {
                cout<<d<<endl;
                break;
            }
        }
    }
}
