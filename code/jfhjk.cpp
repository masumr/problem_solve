#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    int a[10000];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]<=n)
                sum+=a[j];
        }
        cout<<sum<<endl;
    }
}
