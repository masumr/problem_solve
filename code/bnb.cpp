#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100023];
    cin>>a;
    int x=strlen(a);
    for(int i=0;i<x;i++)
        cout<<a[i];
    for(int j=x-1;j>=0;j--)
        cout<<a[j];
    cout<<endl;
}
