#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    int i,t;
    cin>>t;
    int j;
    int a,b,f;
    float c,d,e;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m>>k;
        cout<<"Case "<<i<<": ";
        int s=m+k;
        while(s>n)
        {
            s-=n;
        }
        cout<<s<<endl;
    }
}
