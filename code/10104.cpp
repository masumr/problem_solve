#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int x1,y1,g=gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return g;
}
int main()
{
    int x,y,a,b,g;
    while(cin>>a>>b)
    {
        if(a==0 || b==0)
            cout<<0<<' '<<max(a,b)<<' '<<0<<endl;
        else
        {
            int g=gcd(a,b,x,y);
            //swap(x,y);
            cout<<x<<' '<<y<<' '<<g<<endl;
        }
    }
}
