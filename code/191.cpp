#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,x3,y3,x4,y4,a1,a2;
    long long i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        a1=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
        a2=sqrt(((x4-x2)*(x4-x2))+((y4-y2)*(y4-y2)));
        if(a1==a2)
            cout<<"T"<<endl;
        else
            cout<<"F"<<endl;
    }
    return 0;
}
