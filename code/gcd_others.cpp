#include<bits/stdc++.h>
using namespace std;
int gcd(int n,int m)
{
    if(n%m==0)
        return m;
    return gcd(n,m/2);
}
int main()
{
    int a=24,b=60;
    if(a<b)
        swap(a,b);
    cout<<gcd(a,b)<<endl;
}
