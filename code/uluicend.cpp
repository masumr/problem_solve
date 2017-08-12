#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a>b)
        swap(a,b);
    if(b==0)
        return a;
    return gcd(a,(b-a));
}
int main()
{
    int x=12,y=72;
    cout<<gcd(x,y)<<endl;
}

