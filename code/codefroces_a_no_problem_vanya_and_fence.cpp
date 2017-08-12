#include<bits/stdc++.h>
#define For(i,a,b) for(i=a;i<=b;i++)
using namespace std;
int main()
{
    int p,h,i,a[1000];
    cin>>p>>h;
    int count=0;
    For(i,0,p-1)
    {
        cin>>a[i];
        if(a[i]>h)
            count+=2;
        else
            count++;
    }
    cout<<count<<endl;

}
