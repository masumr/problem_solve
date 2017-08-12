#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    int i,t,sum,count=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        sum=0;
        for(int j=0;j<3;j++)
            cin>>a[j];
        for(int j=0;j<3;j++)
            sum+=a[j];
        if(sum>=2)
            count++;

    }
    cout<<count<<endl;
}
