#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int i,t,n,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
            cin>>a[j];
        sort(a,a+n);
        cout<<"Case "<<i<<": "<<a[n/2]<<endl;
    }
    return 0;
}
