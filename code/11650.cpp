#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>h;
        getchar();
        cin>>m;
        int sum=(24*60)-(h*60+m);
        int h1,m1;
        h1=sum/60;
        if(h1>12) h1%=12;
        m1=sum%60;
        if(h1/10==0)cout<<'0'<<h1;
        else cout<<h1;
        cout<<':';
        if(m1/10==0)cout<<'0'<<m1<<endl;
        else cout<<m1<<endl;
    }
}
