#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,a,b;
    int i,t;
    cin>>t;
    while(t--)
    {
        cin>>sum;
        if(sum>10)
            cout<<10<<' '<<sum-10<<endl;
        else
            cout<<sum<<' '<<0<<endl;
    }
}
