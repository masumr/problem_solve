#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        int a,sum=0;
        cin>>a;
        while(a)
        {
            sum+=a%2;
            a=a>>1;
        }
        printf("Case %d: ",++c);
        if(sum%2)
             cout<<"odd"<<endl;
        else
            cout<<"even"<<endl;
    }
}
