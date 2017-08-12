#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    char a[1000];
    int b[1000];
    ll extra=0,div;
    cin>>a;
    cin>>div;
    int x=strlen(a);
    for(int i=0;i<x;i++)
    {
        extra=extra*10+((int)a[i]-48);
        b[i]=(extra/div);
        extra%=div;
    }
    int k;
    for(int i=0;i<x;i++)
    {
        if(b[i]!=0){
            cout<<b[i];
            k=i;
            break;
        }

    }
    for(int i=k+1;i<x;i++)
        cout<<b[i];
    cout<<' '<<extra<<endl;
}
