#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    int i,t,x;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        x=strlen(a);
        if(x>10)
        {
            cout<<a[0]<<(x-2)<<a[x-1]<<endl;
        }
        else
            cout<<a<<endl;
    }
    return 0;
}
