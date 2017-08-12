#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b;
        int co=0;
        while(sum>=c)
        {
            co+=(sum/c);
            sum=(sum%c)+(sum/c);
        }
        cout<<co<<endl;
    }
}
