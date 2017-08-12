#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0) break;
        int sum=0;
        sum+=(h2-h1)*60;
        if(h1>h2)
            sum=sum+(24*60);
        if(h1==h2 && m1>m2)
            sum+=(24*60);
        sum+=(m2-m1);
        cout<<sum<<endl;
    }

}
