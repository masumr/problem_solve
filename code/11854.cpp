#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    while(cin>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0)
            break;
        else{
            if((a*a+b*b)==c*c)
                cout<<"right"<<endl;
            else if((c*c+b*b)==a*a)
                cout<<"right"<<endl;
            else if((a*a+c*c)==b*b)
                cout<<"right"<<endl;
            else
                cout<<"wrong"<<endl;
        }
    }
    return 0;
}
