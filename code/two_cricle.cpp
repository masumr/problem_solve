#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
typedef double d;
d area(d r,d a)
{
    d thata=acos(((2*r*r)-(a*a))/(2*r*r));
    d area=pi*r*r;
    d area1=(area*thata)/360;
    d s=(r+r+(2*l))/2;
    d area2=sqrt(s*(2*(s-r))*(s-l));
    return (area1-area2);

}
int main()
{
    d x1,x2,y1,y2,r1,r2;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x1>>y1>>x2>>y2>>r1>>r2;
        d l=sqrt(((x1-x2)*(x1-x2))+()
    }
}
