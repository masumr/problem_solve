#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int dif1;
    int dif2;
    cin>>n>>m;
    int a[n+5];
    int b[m+5];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(b,b+n);
    int k;
    if(a[n-1]<b[m-1])
    {
        for(int l=m-2;l>=0;l--)
        {
            if(a[n-1]>=a[l])
            {
                k=l+1;
                break;
            }
        }
    }
    else
        k=m-1;
    int max1;
    if(a[n-1]<b[m-1])
        max1=abs(a[n-1]-b[k]);
    else
        max1=0;
    dif1=abs(a[n-1]-b[k]);
    cout<<dif1<<' '<<max1<<endl;
}
