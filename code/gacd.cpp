#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
int lcm(int n,int m)
{
    return (n*m)/gcd(n,m);
}
int main()
{
    int x,y;
    cin>>x>>y;
    if(x<y)
        swap(x,y);
    cout<<gcd(x,y)<<" "<<lcm(x,y)<<endl;
}
