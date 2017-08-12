#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int  main()
{
    ll a[4],b,c,s;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        for(int j=0;j<3;j++)
            cin>>a[j];
        sort(a,a+3);
        s=sqrt((a[0]*a[0])+(a[1]*a[1]));
        printf("Case %d: ",i);
        if(s==a[2])
           cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
