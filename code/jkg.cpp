#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0,a[10000];cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1 &&  2*m-i>0 && 2*m-i<=n && a[i]==a[2*m-i])
            cnt++;
        if(a[i]==1 && (2*m-i<=0 || 2*m-i>n))
            cnt++;
    }
    cout<<cnt;
}
