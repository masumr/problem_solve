#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a<b)
        swap(a,b);
    int x=0,y=1,lastx=1,lasty=0;
    int t1,t2,t3,q;
    while(b!=0)
    {
        q=a/b;
        t1=a%b;
        a=b;
        b=t1;

        t2=x-(q*x);
        x=lastx-(q*x);
        lastx=t2;

        t3=y-(q*y);
        y=lasty-(q*y);
        lasty=t3;
    }
    cout<<"value of x: "<<t2<<endl;
    cout<<"value of y: "<<t3<<endl;
    cout<<"value of gcd: "<<a<<endl;
}
