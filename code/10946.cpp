#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int t,k;
    cin>>t;
    getchar();

    for(k=1;k<=t;k++)
    {
        getline(cin,a);
        int x=a.size();
        for(int i=0;i<x;i++)
        {
            if(a[i]=='1')
                cout<<"I";
            else if(a[i]=='2')
                cout<<"Z";
            else if(a[i]=='3')
                cout<<"E";
            else if(a[i]=='4')
                cout<<"A";
            else if(a[i]=='5')
                cout<<"S";
            else if(a[i]=='6')
                cout<<"G";
            else if(a[i]=='7')
                cout<<"T";
            else if(a[i]=='8')
                cout<<"B";
            else if(a[i]=='9')
                cout<<"P";
            else if(a[i]=='0')
                cout<<"O";
            else
                cout<<a[i];
        }
        cout<<endl;
    }
}
