#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        int a;
        int sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            if(a>0)
                sum+=a;
        }
        printf("Case %d: %d\n",i,sum);
    }
}
