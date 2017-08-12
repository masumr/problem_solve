#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    int a,b,sum=0;
    for(i=1;i<=3;i++)
    {
        cin>>a>>b;
        sum+=(b-a);
    }
    cout<<sum<<endl;
}
