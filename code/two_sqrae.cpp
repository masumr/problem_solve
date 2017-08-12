#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b,c,x,y,sum;
    cin>>a;
    int i=1;
    c=0;
    while(i<=sqrt(a))
    {
        sum=(a*i)-1;
        b=sqrt(sum);
        if(b*b==sum)
        {
            c=b;
            break;
        }
        i++;
    }
    cout<<c<<endl;
    int t=sqrt(a);
    if(c!=0)
    {
        while(c>t)
        {
            x=a;
            a=c;
            c=x%c;
        }

         cout<<c<<' '<<a%c<<endl;
    }
}
