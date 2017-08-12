#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a1,a2,b1,b2,a,b,c,d,h,c1,c2,d1,d2;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a1>>a2>>b1>>b2>>b>>c>>d;
        a=sqrt(((a1-b1)*(a1-b1))+((a2-b2)*(a2-b2)));
        h=((a+b+d-c)*(b+d+c-a)*(a+d-b-c)*(a+b-c-d));
        if(h<0)
        {
            h*=-1;
            h=sqrt(h);
            h=(-1*.5*h)/(a-c);
        }
        else
             h=(.5*sqrt(h))/(a-c);
        c1=((b*b)-(h*h));
        if(c1<0){
            c1*=-1;
            c1=sqrt(c1);
            c1*=-1;
        }
        else
            c1=sqrt(c1);
        c1=(a-c1);
        c2=h;
        d1=c1-c;
        d2=h;
        printf("Case %d:\n%.10f %.10f %.10f %.10f\n",i,c1,c2,d1,d2);
    }
}
