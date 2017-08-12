#include<bits/stdc++.h>
using namespace std;
int g_c_d(int x,int y)
{
    if(y==0)
        return x;
    return g_c_d(y,x%y);
}
int l_c_m(int e,int d)
{
    return ((e*d)/g_c_d(e,d));
}
int main()
{
    int a,b;
    int lcm,gcd;
    int n=1;
    cin>>a;
    while(n<3)
    {
        cin>>b;
        lcm=l_c_m(a,b);
        a=lcm;
        n++;
    }
    cout<<lcm<<endl;
}
