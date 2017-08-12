#include<bits/stdc++.h>
using namespace std;
int a=2;
int bigmod(int p)
{
    if(p==0)
        return 1;
    if(p==1)
        return a;
    if(p%2==0)
    {
        int x=bigmod(p/2);
        return (x*x)%10;
    }
    else
        return ((a%10)*(bigmod(p-1)%10))%10;
}
int main()
{
    int c;
    while(cin>>c)
    {
        cout<<bigmod(c)<<endl;
    }
}
