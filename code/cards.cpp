#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    int a[109];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int l=n/2;
    int sum1=(sum/l);
    for(int i=1;i<=n;i++)
    {
            for(int j=i+1;j<=n;j++)
            {
                    if((a[i]+a[j])==sum1 && a[j]!=-1){
                        cout<<i<<' '<<j<<endl;
                        a[j]=-1;
                        break;
                    }
            }
    }
    return 0;
}
