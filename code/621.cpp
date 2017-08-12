#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int x=a.size();
        if(a=="1" || a=="4" || a=="78") cout<<"+"<<endl;
        else if(a[x-1]=='5' && a[x-2]=='3'){cout<<"-"<<endl;}
        else if(a[0]=='9' && a[x-1]=='4'){cout<<"*"<<endl;}
        else if(a[0]=='1' && a[1]=='9' && a[2]=='0'){cout<<"?"<<endl;}
    }
}
