#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,w,h,thata,value;
    double area1,area2;
   double pi=acos(-1);
    while(cin>>l>>w>>h>>thata)
    {
        area1=l*tan((pi/180)*thata);

         if(area1>h){
            area2=0.5*h*h*w/area1;
            printf("%.3lf mL\n",area2);
        }
        else
        {
            area2=l*w*((h)-(.5*area1));
            printf("%.3lf mL\n",area2);
        }
    }
    return 0;
}

