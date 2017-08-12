#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    char hello[]="hello";
    cin>>a;
    int x=strlen(a);
    int d=0,count=0;
    for(int i=0;i<x;i++)
    {
        if(a[i]==hello[d])
        {
            count++;
            d++;
        }
    }
    if(count==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
