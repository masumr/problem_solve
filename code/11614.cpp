#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        b=(sqrt(8*a)-1)/2;
        cout<<b<<endl;
        if(b>int(b))
        {
            cout<<(int)b+1<<endl;
        }
        else
            cout<<(int)b<<endl;
    }
}
