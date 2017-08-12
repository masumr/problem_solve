#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        if(b%a==0)
            cout<<a<<" "<<b<<endl;
        else
            printf("-1\n");
    }
    return 0;
}
