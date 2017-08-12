#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[40];
    while(cin>>a)
    {
        int x=strlen(a);
        for(int i=0;i<x;i++)
        {
            if(a[i]=='A' || a[i]=='B' || a[i]=='C')
                cout<<2;
            else if(a[i]=='D'|| a[i]=='E' || a[i]=='F')
                cout<<3;
            else if(a[i]=='G'|| a[i]=='H' || a[i]=='I')
                cout<<4;
            else if(a[i]=='J'|| a[i]=='K' || a[i]=='L')
                cout<<5;
            else if(a[i]=='M'|| a[i]=='N' || a[i]=='O')
                cout<<6;
            else if(a[i]=='P'|| a[i]=='Q' || a[i]=='R' || a[i]=='S')
                cout<<7;
            else if(a[i]=='T'|| a[i]=='U' || a[i]=='V')
                cout<<8;
            else if(a[i]=='W'|| a[i]=='X' || a[i]=='Y' || a[i]=='Z')
                cout<<9;
            else
                cout<<a[i];
        }
        cout<<endl;
    }
}
