#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,q,r,n,td;
    while(cin>>a>>b)
    {
        n=a;
        td=0;
        while(a>=b)
        {
            q=a/b;
            r=a%b;
            a=q+r;
            td=td+q;

        }
        cout<<n+td<<endl;
    }
}
