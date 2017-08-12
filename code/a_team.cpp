#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    int count=0;
    for(i=1;i<=t;i++)
    {
        int a[3];
        int sum=0;
        for(int j=0;j<3;j++)
        {
            cin>>a[j];
            sum+=a[j];
        }
        if(sum>=2)
            count++;
    }
    cout<<count<<endl;
}
