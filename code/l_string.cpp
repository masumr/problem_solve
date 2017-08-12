#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[200],b[200];
    cin>>a;
    int x=strlen(a);
    int k=0;
    for(int i=0;i<x;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            a[i]='a'+(a[i]-'A');
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y')
        {
            continue;
        }
        else
            b[k++]=a[i];
    }
    for(int i=0;i<k;i++)
        cout<<"."<<b[i];
    cout<<endl;
}
