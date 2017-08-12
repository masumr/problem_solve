#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    int b[n+5];
    memset(b,0,sizeof(b));
    int j=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)
            b[j++]=i;
    }
    long long  ans=1;
    for(int k=j-1;k>0;k--)
    {
        ans*=(b[k]-b[k-1]);
    }
    sort(a,a+n);
    if(a[n-1]==0)
        ans--;
    cout<<ans<<endl;
}
