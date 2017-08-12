#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000];
    while(cin>>a)
    {
        int x=strlen(a);
        for(int i=0;i<x;i++)
            cout<<(char)(a[i]-7);
        cout<<endl;
    }
}
