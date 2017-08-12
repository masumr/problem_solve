#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1089];
    int n,m,x;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
        if(a[i]=='*')
            x=i;
    }
    for(int j=1;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        if(a[x]=='*')
    }
}
