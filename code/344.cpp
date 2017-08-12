#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(cin>>x)
    {
        int b,c,d,a,y;
        b=(x/5)*7;
        if(x%5==1)
            b++;
        else if(x%5==2)
            b+=2;
        else if(x%5==3)
            b+=6;
        else if(x%5==4)
            b+=7;
        c=(x/10)*5;
        if(x%10>=4 && x%10<=8)
            c++;
        if(x/10!=0)
            d=2;
        if(x/10>0 && x/10<4)
            d+=((x/10)-1)*12;
        printf("%d: %d i, %d v, %d x \n",x,b,c,d);
    }
}
