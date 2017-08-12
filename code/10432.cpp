#include<bits/stdc++.h>
#define pi 3.14159265358979323846264338327950
using namespace std;
int main()
{
    double r,n,thata_value,area;
    while(cin>>r>>n)
    {
        area=.5*n*r*r*sin((pi/180)*(360/n));
        printf("%.3lf\n",area);
    }
    return 0;

}
