#include<bits/stdc++.h>
using namespace std;
int egcd(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int x1,y1,as=egcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return as;
}
int main()
{
    int a,b,g,x,y;
    cin>>a>>b;
    if(a<b)
        swap(a,b);
    g=egcd(a,b,x,y);
    cout<<x<<' '<<y<<' '<<g<<endl;
}
