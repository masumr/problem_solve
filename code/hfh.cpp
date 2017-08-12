#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a,b;
    cin>>t;
    int sum=0;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        sum+=(b-a);
    }
    cout<<sum<<endl;
}
