#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,j,x,y,n;
    int a[100055];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int max=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        int count=0;
        max=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==a[j-1])
                count++;
            else
            {
                if(max<=count)
                {
                    x=a[j];
                    max=count;
                }
                count=0;
            }
        }
        cout<<"Case "<<i<<": "<<x<<' '<<max<<endl;
    }
}
