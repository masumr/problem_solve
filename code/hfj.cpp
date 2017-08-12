#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,sum=1,n,i;
    while(cin>>n)
    {
        sum=1;
        for(i=1;i<=n;i++)
            sum=sum*i;
        cout<<sum<<endl;
    }
}
