#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b;
    if(a%2==1)
        a+=1;
    if(a/2>=b)
    {
        c=(b*2)-1;
    }
    else
        c=(b-(a/2))*2;
    cout<<c<<endl;
}
