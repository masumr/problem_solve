#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,value1,value2,value3;
    while(cin>>a>>b>>c){
        d=b*b-(4*a*c);
        if(a==0 || d<0)
            printf("Impossivel calcular\n");
        else
        {
            value1=(-b+sqrt(d))/(2*a);
            value2=(-b-sqrt(d))/(2*a);
            printf("R1 = %.5lf\nR2 = %.5lf\n",value1,value2);
        }
    }
    return 0;
}
