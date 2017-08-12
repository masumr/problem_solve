#include<bits/stdc++.h>
using namespace std;
int g_c_d(int a,int b)
{
    if(b==0)
        return a;
    return g_c_d(b,a%b);
}
int main()
{
    int x,y,n,gcd;
    int i=2;
    cin>>n>>x>>y;
    while(i<n)
    {
        gcd=g_c_d(x,y);
        x=gcd;
        i++;
        cin>>y;
    }
    cout<<gcd;
}
