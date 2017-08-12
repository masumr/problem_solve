#include<bits/stdc++.h>
#define pi 3.14159265358979323846264338327950
using namespace std;
int main()
{
    double l,w,r,area1,area2;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>l;
        w=.6*l;
        r=.2*l;
        area1=pi*r*r;
        area2=(l*w)-area1;
        printf("%.2lf %.2lf\n",area1,area2);
    }
    return 0;
}
