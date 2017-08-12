#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10];
    long long c,b,t,i;
    bool ok=false;
    while(cin>>t)
    {
        for(i=1;i<<t;i++)
        {
            cin>>a>>b>>c;
            if(b>2400 && b<c)
                ok=true;
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
