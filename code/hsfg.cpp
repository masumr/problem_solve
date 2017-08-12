#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[20];
    int c,b,t,i,sig;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if(b>2400 && c>b)
            sig=1;
    }
    if(sig==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
